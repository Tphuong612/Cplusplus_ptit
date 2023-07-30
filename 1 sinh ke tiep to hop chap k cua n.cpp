#include <bits/stdc++.h>
using namespace std;
int x[100], n, k, dem=0;
bool ok=true;
void unit()
	{
//		cout<<"\n nhap n, k: "; 
		cin>>n>>k;
		for(int i=1;i<=n;i++)// tap con dau tien la 1,2,3,..
			x[i]=i;
	}
void result()
	{
//		cout<<"\nket qua "<<++dem<<": ";
		for(int i=1;i<=k;i++) cout<<x[i];
		cout<<" ";
	}
void sinhketiep()
	{
		int i=k;
		while(i>0&&x[i]==n-k+i)//tim i sao cho x[i] khac n-k+i
			i--;
		if(i>0) 
			{
				x[i]=x[i]+1;
				for(int j=i+1;j<=k;j++)
					x[j]=x[i]+j-i;
			}
		else ok=false;
	}
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
			
				unit();
				while(ok)
					{
						result();
						sinhketiep();
					}
				cout<<endl;
				ok=true;
			}
	
	}
