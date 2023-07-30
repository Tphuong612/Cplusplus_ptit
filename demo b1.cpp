#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			int n;
			cin>>n;
			int a[n+5];
			map<int, int> m;
			for(int i=0;i<n;i++) 
				{
					cin>>a[i];
					m[a[i]]++;
				}
			for(auto x:m)
				{
					if (x.second>(double)n/2) cout<<x.first<<" ";
				}
			if(m.size()==n) cout<<"-1";
			cout<<endl;
		}
}