#include <bits/stdc++.h>
using namespace std;
void solve()
	{
		int n;
		cin>>n;
		for(int i=2;i<=sqrt(n);i++)
			{
				if (n%i!=0) continue;
				int dem=0;
				while(n%i==0) {
					++dem;
					n=n/i;
				}
				cout<<i<<" "<<dem<<endl;	
			}
		if(n!=1) cout<<n<<" "<<"1"<<endl;
	}
int main()
	{
		solve();
	}
