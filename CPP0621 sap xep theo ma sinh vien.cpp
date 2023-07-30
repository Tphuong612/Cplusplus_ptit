#include <bits/stdc++.h>
using namespace std;
class sinhvien{
	private:
		string msv, ten, lop, email;
	public:
		friend istream &operator >> (istream &is, sinhvien &a)
			{
				scanf("\n");
				getline(cin, a.msv);
				getline (cin,a.ten );
				getline(cin, a.lop);
				getline(cin,a.email);
				return is;
			}
		friend ostream &operator << (ostream &os, sinhvien a)
			{
				cout<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
				return os;
			}
		string getmsv()
			{
				return this->msv;
			}
};
bool cmp(sinhvien a, sinhvien b)
	{
		return a.getmsv()<b.getmsv();
	}
int main()
{
	int n=0;
	sinhvien a[1000], x;
	while(cin>>x)
		{
			a[n++]=x;
		}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
		cout<<a[i];
	return 0;
}
