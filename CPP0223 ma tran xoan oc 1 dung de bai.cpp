#include <bits/stdc++.h>
using namespace std;
void testcase()
	{
		int n,m;
		cin>>n>>m;
		int a[n+5][m+5];

		for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
					{
						cin>>a[i][j];
					}
			}
		int dem=0;
		int h1=0, h2=n-1, c1=0, c2=m-1;
		while(h1<=h2&&c1<=c2)
			{
				for(int i=c1;i<=c2;i++)
					{
				 		cout<<a[h1][i]<<" ";
				 		dem++;
					}
				h1++; 
				if(dem==n*m) break;
				
				for(int i=h1;i<=h2;i++)
					{
						cout<<a[i][c2]<<" ";
						dem++;
					}
				c2--;
				if(dem==n*m) break;
				
				for(int i=c2;i>=c1;i--)
					{
						cout<<a[h2][i]<<" ";
						dem++;
					}
				h2--;
				if(dem==n*m) break;
				
				for(int i=h2; i>=h1;i--) 
					{
						cout<<a[i][c1]<<" ";
						dem++;
					}
				c1++;
				if(dem==n*m) break;
			}
		cout<<endl;
		
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			testcase();
		}
}
