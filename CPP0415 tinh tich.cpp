#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				int n,m;
				cin>>n>>m;
				set <long long> a,b;
				for(int i=0;i<n;i++)
					{
						int x;
						cin>>x;
						a.insert(x);
					}
				long long max=*a.rbegin();
				for(int i=0;i<m;i++)
					{
						int x;
						cin>>x;
						b.insert(x);
					}
				long long min=*b.begin();
				long long tich=min*max;
				cout<<tich<<endl;
			}

	}
