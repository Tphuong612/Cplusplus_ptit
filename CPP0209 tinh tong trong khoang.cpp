#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				int n,q;
				cin>>n>>q;
				int a[n+5];
				for(int i=1;i<=n;i++)
					cin>>a[i];
				int l,r;
				long long s[q+5];
				for(int i=1;i<=q;i++)
					{
						cin>>l>>r;
						long long sum=0;
						for(int i=l;i<=r;i++)
							sum=sum+a[i];
						s[i]=sum;
					}
				for(int i=1;i<=q;i++) cout<<s[i]<<endl;
				
			}
	}
