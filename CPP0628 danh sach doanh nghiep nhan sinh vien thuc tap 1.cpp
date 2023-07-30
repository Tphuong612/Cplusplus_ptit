#include <bits/stdc++.h>
using namespace std;
class doanhnghiep{
	private:
		string ma, ten;
		int sl;
	public:
		friend istream &operator >>(istream &is, doanhnghiep &a)
			{
				scanf("\n");
				getline(cin, a.ma);
				getline(cin, a.ten);
				cin>>a.sl;
				return is;
			}
		friend ostream &operator<< (ostream &os, doanhnghiep a)
			{
				cout<<a.ma<<" "<<a.ten<<" "<<a.sl<<endl;
				return os;
			}
		int getsl()
			{
				return sl;
			}
		string getma()
			{
				return ma;
			}
};
bool cmp(doanhnghiep a, doanhnghiep b)
	{
		if(a.getsl()==b.getsl()) return a.getma()<b.getma();
		return a.getsl()>b.getsl();
	}
int main()
{
	int n;
	cin>>n;
	doanhnghiep a[n+5];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n, cmp);
	for(int i=0;i<n;i++) cout<<a[i];
}
