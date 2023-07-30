#include <bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long t,m;
};
void nhap(PhanSo &a)
	{
		cin>>a.t>>a.m;
	}
void rutgon(PhanSo &a)
	{
		long long i=__gcd(a.t,a.m);// ham "__gcd" tim ucln
		a.t/=i;
		a.m/=i;
	}
PhanSo tong(PhanSo p, PhanSo q)
	{
		PhanSo t;
		long long i=__gcd(p.m, q.m);
		t.m=(p.m*q.m)/i;
		t.t=p.t*(t.m/p.m)+ q.t*(t.m/q.m);
		rutgon(t);
		return t;
	}

void in(PhanSo a)
	{
		cout<<a.t<<"/"<<a.m;
	}
int main()
	{
		struct PhanSo p,q;
		nhap(p);
		nhap(q);
		PhanSo t= tong(p,q);
		in(t);
		return 0;
	}
