#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string hoten, gioitinh, ngaysinh, diachi, thue, ngayki;
};
void nhap(NhanVien &a)
	{
		cin.ignore();
		getline(cin, a.hoten);
		cin>> a.gioitinh;
		cin>> a.ngaysinh;
		cin.ignore();
		getline(cin, a.diachi);
		cin>> a.thue;
		cin>> a.ngayki;
	}
void ChuanHoa(string &a)
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
void inds(NhanVien ds[50], int n)
	{
		for(int i=0;i<n;i++)
			{
				int ma=i+1;
				int k=chuso(ma);
				for(int i=0;i<5-k;i++) cout<<"0";
				cout<<ma<<" ";
				ChuanHoa(ds[i].ngaysinh);
				ChuanHoa(ds[i].ngayki);
				cout<<ds[i].hoten<<" "<<ds[i].gioitinh<<" "<<ds[i].ngaysinh<<" "<<ds[i].diachi<<" "<<ds[i].thue<<" "<<ds[i].ngayki<<endl;
			}
		
	}

int main()
	{
		int N;
		cin>>N;
		struct NhanVien ds[50];
		for(int i=0;i<N;i++) nhap(ds[i]);
		inds(ds,N);	
			
	}
