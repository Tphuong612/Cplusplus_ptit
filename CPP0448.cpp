#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				int n,k;
				cin>>n>>k;
				int a[n+5];
				map <int, int> m;
				for(int i=0;i<n;i++)
					{
						cin>>a[i];
						m[a[i]]++;
					}
				if(m.count(k)==0) cout<<"-1\n";
				else cout<<m[k]<<endl;
			}
	}
