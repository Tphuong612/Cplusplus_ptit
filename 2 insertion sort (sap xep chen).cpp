// insertion sort - sap xep chen
// sap xep tang dan
#include <bits/stdc++.h>
using namespace std;

void insertion_Sort(int a[], int n)
	{
		int key;// chi mang tac dung khai bao
		for(int i=1;i<n;i++)
			{
				key=a[i];// gia tri can phai sap xep
				int j=i-1;// khoi tao gia tri j cho vong while
				while(j>=0&&a[j]>key)//	neu gia tri truoc lon hon gia tri sau thi ta lui den khi gia tri truoc nho hon gia tri sau - tinh tang dan;
					// khi j la chi so trong mang a, va a[j]>gia tri can sap xep(key)
					// neu a[j]<key hay la a[j]<a[i] thi ta ko chay vong while
					{
						a[j+1]=a[j];// lui cac phan tu cua mang ve ben phai(hay la lui ve dang sau);
						j--;// giam dan den khi vong while sai
					}
				a[j+1]=key;//luc nay key cach gia tri lam cho vong while sai la 2 don vi, nen j+1 chinh la vi tri thich hop;
			}
	}
void nhap(int a[], int n)
	{
		for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
	}
void in(int a[],int n)
	{
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			int n; cin>>n;
			int a[n+5];
			nhap(a,n);
			insertion_Sort(a,n);
			in(a,n);
		}
}
