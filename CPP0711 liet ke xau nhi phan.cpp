#include <bits/stdc++.h>
using namespace std;
int x[100],n, dem=0;
bool ok;
void khoitao()// khoi tao xau nhi phan dau tien
	{
		cin>>n;
		for(int i=1;i<=n;i++) x[i]=0;
	}
void ketqua()// dua ra xau nhi phan hien tai
	{
		for(int i=1;i<=n;i++) cout<<x[i];
		cout<<" ";
	}
void xauketiep()
	{
		
		int i=n;
		while(i>0&&x[i]==1)// hay x[i]==1
			{
				x[i]=0;
				i--;// lui i lai vi tri sau
			}
		if(i>0) x[i]=1;// gap x[i]=0 dau tien ta se chuyen thanh 1
		else ok=false;// ket thuc khi gap xau co n so 1
	}
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				khoitao();
				ok=true;
				while(ok)
					{
						ketqua();
						xauketiep();
					}
				cout<<endl;
			}
	}
