#include <bits/stdc++.h>
using namespace std;
void solve()
	{
		int n;
		cin>>n;
		for(int i=2;i<=n;i++)
			{
				if (n%i!=0) continue;
				int dem=0;
				while(n%i==0) {
					++dem;
					n=n/i;
				}
				cout<<i<<" "<<dem<<" ";	
				if(n==1) cout<<endl;
			}
	}
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				solve();
			}
	}
