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
				long a[n+5];
				map <long, long> m;
				for(int i=0;i<n;i++)
					{
						cin>>a[i];
						m[a[i]]++;
					}
//				for(int i=0;i<n;i++)
//					{
//						m.insert(make_pair(a[i],a[i]));// do ta khong quan tam so lan xuat hien
//					}
				int dem=0;
				if(m.size()==1) cout<<"-1";
				else
					for(auto x:m)
						{
							cout<<x.first<<" ";
							++dem;
							if(dem==2) break;
						}
				cout<<endl;
				
			}
	}
