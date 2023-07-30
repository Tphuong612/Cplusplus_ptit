#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				int k,n;
				cin>>k>>n;
				long long a[k+2][n+2], b[n*k+5];
				int dem=0;
				for(int i=0;i<k;i++)
					{
						for (int j=0;j<n;j++)
							{
								cin>>a[i][j];
								b[dem]=a[i][j];
								dem++;
						}
					}
				sort(b,b+dem);
				for(int i=0;i<dem;i++)
					cout<<b[i]<<" ";
				cout<<endl;
			}
		
	}
