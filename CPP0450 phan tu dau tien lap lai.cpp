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
				map <int, int> m;
				set <int> s;
				for(int i=0;i<n;i++)
					{
						cin>>a[i];
						s.insert(a[i]);
					}
				
				for(int i=0;i<n;i++)
					{
						m[a[i]]++;
						if(m[a[i]]==2) 
							{
								cout<<a[i]<<endl;
								break;
							}
 					}
 				if (s.size()==n) cout<<"-1\n";
			}
	}
