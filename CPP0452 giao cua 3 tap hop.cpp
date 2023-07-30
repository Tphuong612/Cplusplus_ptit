#include <bits/stdc++.h>
using namespace std;
void solve()
	{
		long long m,n,k;
		cin>>m>>n>>k;
		long long a[m], b[n], c[k];
		for(auto &x: a) cin>>x;
		for(auto &x: b) cin>>x;
		for(auto &x: c) cin>>x;
		int i=0, j=0, p=0;
		int dem=0;
		while(i<m&&j<n&&p<k)
			{
				if(a[i]==b[j]&&b[j]==c[p]) 
					{
						cout<<a[i]<<" ";
						i++; j++; p++;
						dem++;
					}
				else if(a[i]<=b[j]&&a[i]<=c[p]) i++;
				else if(b[j]<=a[i]&&b[j]<=c[p]) j++;
				else p++;
			}
		if (dem==0) cout<<"-1\n";
		cout<<endl;
			
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
