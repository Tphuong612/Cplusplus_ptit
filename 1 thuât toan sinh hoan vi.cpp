#include <bits/stdc++.h>
using namespace std;
int x[100], n, dem=0;
bool ok=true;
void unit()
	{
		cout<<"\nhap n: "; cin>>n;
		for(int i=1;i<=n;i++)// tap con dau tien la 1,2,3,..
			x[i]=i;
	}
void result()
	{
		cout<<"\nket qua "<<++dem<<": ";
		for(int i=1;i<=n;i++) cout<<x[i]<<" ";
		cout<<endl;
	}
void sinhketiep()
	{
		int j=n-1;
		while(j>0&&x[j]>x[j+1])// tim chi so j sao cho x[j]<x[j+1]
			j--;
		if(j>0)
			{
				int k=n;
				while(x[j]>x[k]) k--;
				swap(x[j], x[k]);
				int r=j+1, s=n;//lat nguoc lai tu doan j+1 den n
				while(r<=s)
					{
						swap(x[r],x[s]);
						r++;s--;
					}
			}
		else ok=false;
	}
int main()
	{
		
		unit();
		while(ok)
			{
				result();
				sinhketiep();
			}
	}
