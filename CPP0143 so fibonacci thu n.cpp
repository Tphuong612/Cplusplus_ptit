#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int t;
		cin>>t; 
		while (t--)
			{
				long long a[100];
				a[1]=1;
				a[2]=1;
				int n;
				cin>>n;
				for (int i=3;i<=n;i++)
					{
						a[i]=a[i-1]+a[i-2];
					}
				cout<<a[n]<<endl;
			}
	}
