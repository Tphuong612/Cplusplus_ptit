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
			long long b[n+5];
			for(int i=0;i<n;i++) cin>>b[i];
			for(int i=0;i<n;i++)	
				{
					if (check(b[i])) cout<<b[i]<<" ";
				}
			cout<<endl;
		}
}
