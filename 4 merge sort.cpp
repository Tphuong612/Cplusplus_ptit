// merge sort- sap xep tron
#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int m, int r)// r la gia tri phan tu cuoi cung r-1
	{
		vector <int> x(a+l, a+m+1);// do vector chi tinh trong [a+l, a+m+1)
		vector <int> y(a+m+1, a+r+1);// tuong tu tren
		int i=0, j=0;
		while(i<x.size()&& j<y.size())
			{
				if(x[i]<=y[j])
					{
						a[l]=x[i];
						++l;
						++i;
					}
				else 
					{
						a[l]=y[j];
						l++;
						j++;
					}
			}
		while(i<x.size())
			{
				a[l]=x[i];
				++i; ++l;
			}	
		while(j<y.size())
			{
				a[l]=y[j];
				++j; ++l;
			}	
	}
void mergesort(int a[], int l, int r)
	{
		if(l>=r) return;
		int m=(l+r)/2;
		mergesort(a,l,m);
		mergesort(a, m+1, r);
		merge(a, l, m, r);
	}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	mergesort(a,0,n-1);
	for(auto x:a)
		cout<<x<<" ";
	
}
