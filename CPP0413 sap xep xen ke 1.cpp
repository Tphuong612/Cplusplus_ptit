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
				for(int i=0;i<n;i++)
					cin>>a[i];
				sort(a,a+n);

				for(int i=0;i<(n+1)/2;i++)
					{
						cout<<a[n-1-i]<<" ";
						if(a[i]!=a[n-1-i])cout<<a[i]<<" ";
					}
				cout<<endl;
			}
	}
