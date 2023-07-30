#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int n,m,p;
		cin>>n>>m>>p;
		int a[55][55], b[55][55];
		for(int i=1;i<=n;i++)//nhap ma tran a
			for(int j=1;j<=m;j++)
				cin>>a[i][j];
		for(int i=1;i<=m;i++)//nhap ma tran b
			for(int j=1;j<=p;j++)
				cin>>b[i][j];
		long long c[55][55];
		for(int i=1;i<=n;i++)
			for(int j=1;j<=p;j++)
				{
					c[i][j]=0;
					for(int k=1;k<=m;k++)
						c[i][j]+=a[i][k]*b[k][j];
				}
		for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=p;j++)
					{
						cout<<c[i][j]<<" ";
					}
				cout<<endl;
			}
	}
