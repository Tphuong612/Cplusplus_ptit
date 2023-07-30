#include <bits/stdc++.h>
using namespace std;
int souoc(float a, float b, long long n)
	{
		int l=ceil(a/n);
		int r=floor(b/n);
		int dem=r-l+1;
		return dem;
	}
int main()
{
	int t;
	cin>>t;
	while (t--)
		{
			int m,n,a,b;
			cin>>m>>n>>a>>b;
			long long bcnn=a*b/__gcd(a,b);//__gcd la ham tim uoc chung lon nhat
			int dem1=souoc(m,n,a);
			int dem2=souoc(m,n,b);
			int dem3=souoc(m,n,bcnn);
			cout<<dem1+dem2-dem3<<endl;
		}
}
