#include <bits/stdc++.h>
using namespace std;
int a[1000005];
void solve()
	{
		int n,k;
		cin>>n>>k;
		int dem=0;
		for(int i=2;i<=sqrt(n);i++)
			{
				while(n%i==0) {
					++dem;
					a[dem]=i;
					n=n/i;
					
				}			
			}
		if(n!=1) 
			{
			++dem;
			a[dem]=n;}
		if(k>dem) cout<<"-1";
		else cout<<a[k];
		
	}
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				solve();
				cout<<endl;
			}
	}