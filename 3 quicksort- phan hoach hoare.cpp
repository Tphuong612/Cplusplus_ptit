//phan hoach hoare
#include <bits/stdc++.h>
using namespace std;
int partition(int a[], int l, int r)
	{
		int pivot=a[l];// chot duoc gan so dau
		int i=l-1, j=r+1;
		while(1)
			{
				do i++;
				while(a[i]<pivot);// lan cuoi cung se tu tang i len 1 du while sai
				// a[i] < pivot la dung vi tri cua i roi nen ta se tang i len de xet phan tu khac
				
				do j--;
				while(a[j]>pivot);// lan cuoi cung se tu tang j len 1 du while sai
				// a[j] > pivot la dung vi tri cua j roi nen ta se tang j len de xet phan tu khac
				if(i<j) // dung khi i==j;
					{
						// i++, j++ neu 2 vong tren su dung while
						swap(a[i], a[j]);
					}
				else return j;
			}
	}
void quicksort(int a[], int l, int r)// su dung de quy
	{
		if(l>=r) return;
		int p=partition(a,l,r);// mang a, gia tri l, gia tri r
		quicksort(a,l,p);// cho khac biet la p chu khong phai la p-1
		quicksort(a,p+1,r);
	}
int main()
{
	int a[1000],t;
	cin>>t; 
	while(t--)
		{
			int n;
			cin>>n;
			for(int i=0;i<n;i++)
				cin>>a[i];
			quicksort(a,0, n-1);
			for(int i=0;i<n;i++)
				cout<<a[i]<<" ";
			cout<<endl;
		}
}
