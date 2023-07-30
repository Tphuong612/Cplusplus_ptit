#include <bits/stdc++.h>
using namespace std;
long long a[10005];
void fb()
	{
		a[0]=0;
		a[1]=1;
		for(int i=2;i<=100;i++)
			a[i]=a[i-1]+a[i-2];
	}
bool check(long long n)
	{
		fb();
		for(int i=0;i<=100;i++)
			if(n==a[i]) return true;
		return 0;
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			long long n;
			cin>>n;
			if (check(n)==true) cout<<"YES\n";
			else cout<<"NO\n";	
		}
}
