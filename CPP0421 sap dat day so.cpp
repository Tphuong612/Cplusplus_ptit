#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				long long n;
				cin>>n;
				long long a[n+5];
				for(int i=0;i<n;i++)
					{
						cin>>a[i];
					}
				for(int i=0;i<n;i++)
					{
						for(int j=0;j<n;j++)
							{
								if(a[i]==j) a[i]=j;
							}
					}
				for(int i=0;i<n;i++)
					{
						cout<<a[i]<<" ";
					}
				cout<<endl;
			}
	}
