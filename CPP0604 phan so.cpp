#include <bits/stdc++.h>
using namespace std;
class PhanSo{
	private: 
		long long tu, mau;
	public:
		PhanSo(const long long &tu,const long long &mau)// :: toan tu pham vi
			{
				this->tu=tu;
				this->mau=mau;
			}
		friend istream& operator >>(istream& in, PhanSo &a );
		friend ostream& operator <<(ostream& out, PhanSo a);
		void rutgon()
			{
				long long i=__gcd(tu,mau);// ham "__gcd" tim ucln
				tu/=i;
				mau/=i;
			}
};
istream& operator >>(istream& in, PhanSo& a)
	{
		cin>>a.tu>>a.mau;
		return in;
	}
ostream& operator <<(ostream& out, PhanSo a)
	{
		cout<<a.tu<<"/"<<a.mau;
		return out;
	}
int main()
	{
		PhanSo p(1,1);
		cin >> p;
		p.rutgon();
		cout << p;
		return 0;
	}
