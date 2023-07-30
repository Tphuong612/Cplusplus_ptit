#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	int ma;
	string ht, gt, ns, dc, t, nk;// ho ten, gioi tinh, ngay sinh, dia chi, ma so thue, ngay ki
};
void nhap(NhanVien &a)
	{
		scanf("\n");
		getline(cin, a.ht);
		getline(cin, a.gt);
		getline(cin, a.ns);
		getline(cin, a.dc);
		getline(cin, a.t);
		getline(cin, a.nk);
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
bool cmp(NhanVien a, NhanVien b)
	{
		int m1=(a.ns[0]-'0')*10+(a.ns[1]-'0'), d1=(a.ns[3]-'0')*10+(a.ns[4]-'0'), y1=stoi(a.ns.substr(6));
		int m2=(b.ns[0]-'0')*10+(b.ns[1]-'0'), d2=(b.ns[3]-'0')*10+(b.ns[4]-'0'), y2=stoi(b.ns.substr(6));
		if(y1!=y2) return y1<y2;
		if(m1!=m2) return m1<m2;
		return d1<d2;
	}
void sapxep (NhanVien ds[], int n)
	{
		for(int i=0;i<n;i++) 
			{
				chuanhoa(ds[i].ns);
				ds[i].ma=i+1;
			}
		sort(ds, ds+n, cmp);
	}

void inds(NhanVien ds[], int n)
	{
		for(int i=0;i<n;i++)
			{
				chuanhoa(ds[i].nk);
				int k=chuso(ds[i].ma);
				for(int i=0;i<5-k;i++) cout<<"0";
				cout<<ds[i].ma<<" ";
				cout<<ds[i].ht<<" "<<ds[i].gt<<" "<<ds[i].ns<<" "<<ds[i].dc<<" "<<ds[i].t<<" "<<ds[i].nk<<endl;
			}
	}
int main()
	{
		struct NhanVien ds[50];
	    int N,i;
	    cin >> N;
	   
	    for(i = 0; i < N; i++) nhap(ds[i]);
	    sapxep(ds, N);
	    inds(ds, N);
	    return 0;
	}
