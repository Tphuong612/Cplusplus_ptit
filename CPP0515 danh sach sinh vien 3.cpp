#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ht, lop, ns;
	int ma;
	float gpa;
};
int chuso(int i)
	{
		int dem=0;
		while(i!=0)
			{
				dem++;
				i=i/10;
			}
		return dem;
	}
void nhap(SinhVien ds[50], int n)
	{
		cin.ignore();
		for(int i=0;i<n;i++)
			{
				ds[i].ma=i+1;
				getline(cin,ds[i].ht);
				cin>>ds[i].lop>>ds[i].ns>>ds[i].gpa;
				cin.ignore();
			}
	}
void chuanhoa(string &a)
	{
		if(a[2]!='/') a='0'+a;
		if(a[5]!='/') a.insert(3,"0");
	}

void chuanhoaten(string &a)
	{
		for(int i=0;i<a.length();i++) a[i]=tolower(a[i]);
		stringstream s(a);
		string tmp;
		while(s>>tmp)
			{
				tmp[0]=toupper(tmp[0]);
				cout<<tmp<<" ";
			}
	}
bool cmp(SinhVien a, SinhVien b)
	{
		return a.gpa>b.gpa;
	}
void sapxep(SinhVien ds[50], int N)
	{
		sort(ds,ds+N,cmp);
	}
void in(SinhVien ds[50], int n)
	{
		for(int i=0;i<n;i++)
		{
			chuanhoa(ds[i].ns);
			cout<<"B20DCCN";
			int k=chuso(ds[i].ma);
			for(int i=0;i<3-k;i++) cout<<"0";
			cout<<ds[i].ma<<" ";
			chuanhoaten(ds[i].ht);
			cout<<ds[i].lop<<" "<<ds[i].ns<<" "<<fixed<<setprecision(2)<<ds[i].gpa<<endl;
		}
	}
int main()
	{
		struct SinhVien ds[50];
	    int N;
	    cin >> N;
	    nhap(ds, N);
	    sapxep(ds,N);
	    in(ds, N);
	    return 0;
	}
