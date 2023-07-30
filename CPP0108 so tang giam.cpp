#include <bits/stdc++.h>
using namespace std;
bool snt(long long n)
	{
		if(n<2) return 0;
		for(int i=2;i<=sqrt(n);i++)
		 	if(n%i==0) return false;
		return true;
	}
bool tang(long long n)
	{
		while(n>0)
			{
				int n1=n%10;
				n=n/10;
				int n2=n%10;
				if(n1<=n2) return false;
			}
		return true;
	}
bool giam(long long n)
	{
		while(n>10)
			{
				int n1=n%10;
				n=n/10;
				int n2=n%10;
				if(n1>=n2) return false;
			}
		return true;
	}
	
long long tinh(int x)
	{
		int n=1;
		int i=1;
		while(i<x) 
			{
				n=n*10;
				i++;
			}
		return n;
	}
void solve()
	{
		int n;
				cin>>n;
				int dem=0;
				for(int i=tinh(n);i<=tinh(n+1)-1;i++)
					{
						if(tang(i)||giam(i))
							{
								if(snt(i)) 
								dem++;
					
							}
					}
				cout<<dem<<endl;
	}
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				solve();
			}
		return 0;
	}
