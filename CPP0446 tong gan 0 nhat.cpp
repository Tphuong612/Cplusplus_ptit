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
				for(int i=0;i<n;i++) cin>>a[i];
				long res, min=99999999;
				for(int i=0;i<n;i++)
					{
						for(int j=i+1;j<n;j++)
							{
								int tmp=a[i]+a[j];
								if(min>abs(tmp)) 
									{
										min=abs(tmp);
										res=tmp;
									}
							}
						
					}
				cout<<res<<endl;
			}
	}
