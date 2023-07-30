#include <bits/stdc++.h>
using namespace std;
void insertionSort(int a[], int n)
	{
		for(int i=1;i<n;i++)
			{
				int key=a[i];
				int j=i-1;// duyet lui tu vi tri j=i-1(tuc la vi tri lien truoc key)
				while(j>=0&&a[j]>key)
					{
						a[j+1]=a[j];//dich cac phan tu trong khoang index tu gia tri lien trc key den gia tri lam cho a[j]<a[i](tuc la so truoc lon hon so sau)
						j--;// lui ve thanh cac so lien truoc
					}
				a[j+1]=a[j];//luc nay key cach gia tri lam cho vong while sai la 2 don vi, nen j+1 chinh la vi tri thich hop;	
			}
		
	}
int main()
{
}
