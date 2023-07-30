#include <bits/stdc++.h>
using namespace std;
class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(){
		}
		PhanSo(long long a, long long b)
			{
				this->tu=a;
				this->mau=b;
			}
		void rutgon()
			{
				long long ucln=__gcd(tu, mau);
				tu/=ucln;
				mau/=ucln;
			}
		friend istream &operator >> (istream &in, PhanSo &a)
			{
				in>>a.tu>>a.mau;
				return in;
			}
		friend ostream &operator << (ostream &out, PhanSo a)
			{
				out<<a.tu<<"/"<<a.mau;
				return out;
			}

		friend PhanSo operator + (const PhanSo a, const PhanSo b)
			{
				PhanSo tong;
				long long ucln=__gcd(a.mau, b.mau);
				long long bcnn=a.mau*b.mau/ucln;
				tong.mau=bcnn;
				tong.tu=a.tu*(bcnn/a.mau)+b.tu*(bcnn/b.mau);
			
				tong.rutgon();
				return tong;
			}	
};

	
int main()
	{
		PhanSo p(1,1), q(1,1);
		cin >> p >> q;
		cout << p + q;
		return 0;
	}
