#include <bits/stdc++.h>
using namespace std;
struct thoigian{
	int gio, phut, giay;
};
bool cmp(thoigian &a, thoigian &b)
	{
		long long t1=a.gio*3600+a.phut*60+a.giay;
		long long t2=b.gio*3600+b.phut*60+b.giay;
		return t1<t2;
	}
void nhap(thoigian &a)
	{
		cin>>a.gio>>a.phut>>a.giay;
	}
void in(thoigian &a)
	{
		cout<<a.gio<<" "<<a.phut<<" "<<a.giay<<endl;
	}
int main()
	{
		int n;
		cin>>n;
		thoigian ds[n+5];
		for(int i=0;i<n;i++) nhap(ds[i]);
		sort(ds, ds+n, cmp);
		for(int i=0;i<n;i++) in(ds[i]);
			
		
	}
