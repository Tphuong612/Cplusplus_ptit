#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ht, lop, ns;
	float gpa;
};
void nhap(SinhVien ds[50], int n)
	{
		cin.ignore();
		for(int i=0;i<n;i++)
			{
				
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
void in(SinhVien ds[50], int n)
	{
		for(int i=0;i<n;i++)
		{
			chuanhoa(ds[i].ns);
			int ma=i+1;
			int k=chuso(ma);
			cout<<"B20DCCN";
			for(int i=0;i<3-k;i++) cout<<"0";
			cout<<ma<<" "<<ds[i].ht<<" "<<ds[i].lop<<" "<<ds[i].ns<<" "<<fixed<<setprecision(2)<<ds[i].gpa<<endl;
		}
	}
int main()
	{
		struct SinhVien ds[50];
	    int N;
	    cin >> N;
	    nhap(ds, N);
	    in(ds, N);
	    return 0;
	}
