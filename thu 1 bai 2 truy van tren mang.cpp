#include <bits/stdc++.h>
using namespace std;
int main()
	{
		multiset <int> s;
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
			{
				int x;
				cin>>x;
				s.insert(x);
			}
		int q;
		cin>>q;
		while(q--)
			{
				int a,b;
				cin>>a>>b;
				if(a==1) s.insert(b);
				if(a==2) {
					auto it =s.find(b);
					if(it!=s.end()) s.erase(it);
				}
				if(a==3) 
					{
						if(s.find(b)!=s.end()) cout<<"YES\n";
						else cout<<"NO\n";
					}
			}
		
		
	}