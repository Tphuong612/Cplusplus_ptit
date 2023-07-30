// phan hoach lomuto - lomuto partition
//pivot-chot
// phan hoach lomuto la phan hoach ma chon chot la phan tu cuoi cung
#include <bits/stdc++.h>
using namespace std;
int partition (int a[], int l, int r)// co tac dung phan hoach
	{
		int pivot=a[r];// chot duoc gan bang phan tu ben phai cung
		int i=l-1;
		for(int j=l; j<=r-1; j++)
			{
				if (a[j]<=pivot)// dam bao tang dan
					{
						++i;// vi tri phan tu i da duoc sap xep roi nen ta tang i len
						swap(a[i], a[j]);
					}	
			}
		// dua chot ve giua de dam bao ben trai nho hon chot, ben phai lon hon chot
		swap(a[i+1], a[r]);
		return i+1;// tra ve vi tri cua chot
	}
void quicksort(int a[], int l, int r)// su dung de quy
	{
		if(l>=r) return;
		int p=partition(a,l,r);// mang a, gia tri l, gia tri r
		quicksort(a,l,p-1);
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
