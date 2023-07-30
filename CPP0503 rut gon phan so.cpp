#include <bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu;
	long long mau;
};
void nhap(PhanSo &a)
	{
		cin>>a.tu>>a.mau;
	}

void rutgon(PhanSo &a)
	{
		long long i=__gcd(a.tu,a.mau);// ham "__gcd" tim ucln
		a.tu/=i;
		a.mau/=i;
	}
void in(PhanSo a)
	{
		cout<<a.tu<<"/"<<a.mau;
	}
int main()
	{
		struct PhanSo p;
		nhap(p);
		rutgon(p);
		in(p);
		return 0;
	}
