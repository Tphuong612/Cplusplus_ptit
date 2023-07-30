#include <bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu,mau;
};
void rutgon(PhanSo &a)
	{
		long long i=__gcd(a.tu,a.mau);// ham "__gcd" tim ucln
		a.tu/=i;
		a.mau/=i;
	}
PhanSo tong(PhanSo p, PhanSo q)
	{
		PhanSo t;
		long long i=__gcd(p.mau, q.mau);
		t.mau=(p.mau*q.mau)/i;
		t.tu=p.tu*(t.mau/p.mau)+ q.tu*(t.mau/q.mau);
		rutgon(t);
		PhanSo c;
		c.tu=t.tu*t.tu;
		c.mau=t.mau*t.mau;
		return c;
	}
void nhan(PhanSo a, PhanSo b, PhanSo c)
	{
		PhanSo d;
		d.tu=a.tu*b.tu*c.tu;
		d.mau=a.mau*b.mau*c.mau;
		rutgon(d);
		cout<<d.tu<<"/"<<d.mau<<endl;
	}
void process(PhanSo A, PhanSo B)
	{
		PhanSo c=tong(A,B);
		cout<<c.tu<<"/"<<c.mau<<" ";
		nhan(A,B,c);
	}
int main()
	{
		int t;
		cin >> t;
		while (t--) 
		{
			PhanSo A;
			PhanSo B;
			cin >> A.tu >> A.mau >> B.tu >> B.mau;
			process(A, B);
		}
	}
