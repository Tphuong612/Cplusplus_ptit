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
				int check[1000005]={0};
				for(int i=0;i<n;i++)
					{
						cin>>a[i];
						if(a[i]>0) check[a[i]]=1;
					}
				for(int i=1;i<1000005;i++)
					{
						if (check[i]==0) 
							{
								cout<<i<<endl;
								break;
							}
					}
			}
	}
