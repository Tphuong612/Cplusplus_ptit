#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			int a,x,y;
			cin>>a>>x>>y;
			long long k=__gcd(x,y);// ucln cua p va q la so lan lap a cua ucln cua x va y
			for(int i=1;i<=k;i++) cout<<a;
			cout<<endl;
			
		}
}
