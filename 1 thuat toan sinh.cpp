#include <bits/stdc++.h>
using namespace std;
int x[100], n, dem=0;
bool ok=true;
void init(void)
	{
		cout<<"nhap n=";
		cin>>n;
		for(int i=1;i<=n;i++)
			x[i]=0;// thiet lap xau voi n so 0
	}
void result(void)// dua ra xau nhi phan hien tai
	{
		cout<<"\nxau thu "<<++dem<<":";
		for(int i=1;i<=n;i++)
			cout<<x[i]<<setw(3);// ham setw
	}
void next_bits_string(void)// thuat toan sinh xau nhi phan ke tiep
	{
		int i=n;
		while(i>0&&x[i]==1)//duyet tu vi tri ben phai nhat
			{
				x[i]=0;// neu gap x[i]=1 thi ta chuyen thanh 0
				i--;//lui lai vi tri sau
			}
		if(i>0) x[i]=1;//neu gap x[i]=0 dau tien ta chuyen thanh 1
		else ok=false;
	}
int main(void)// day la thuat toan sinh
	{
		init();// thiet lap cau hinh dau tien
		while(ok)// lap khi chua phai cau hinh cuoi cung
			{
				result();// dua ra cau hinh hien tai
				next_bits_string();// dua ra cau hinh ke tiep
			}
	}
