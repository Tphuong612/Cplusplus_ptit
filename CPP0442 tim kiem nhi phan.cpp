#include <bits/stdc++.h>
using namespace std;
int find(vector <int> v, int x)
	{
		int i=0;
		while(i<v.size())
			{
				if(v[i]==x) 
					{
						return i;
					}
				else ++i;
			}
		return 0;
	}
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				int n,x;
				cin>>n>>x;
				vector <int> v;
				for(int i=0;i<n;i++)
					{
						int k;
						cin>>k;
						v.push_back(k);
					}
				if(find(v,x)==0) cout<<"-1\n";
				else cout<<"1\n";
					
			}
	}
