#include <bits/stdc++.h>
using namespace std;
int n, a[1005];
void hoanvilientrc()
	{
		int j=n-1;
		while(j>0&&a[j]<=a[j+1]) j--;// tim vi tr de so truoc > so sau	
		int max=j+1;
		for(int i=j+1;i<=n;i++) // tim phan tu lon nhat va nho hon a[j] nam ben phai a[j]; 
			{
				for(int k=i+1;k<=n;k++)
					{
						if(a[k]>a[i]&&a[k]<a[j]) max=k; 
					}
			}
		
		swap(a[j], a[max]);// doi cho 2 vi tri do

		int l=j+1, r=n;// lat nguoc lai doan tu j+1 den het
		while(l<=r) // left-right
			{
				swap(a[l],a[r]);
				l++; r--;
			}
			
		
		
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			cin>>n;
			for(int i=1;i<=n;i++)
				cin>>a[i];
			hoanvilientrc();
			for(int i=1;i<=n;i++)
				cout<<a[i]<<" ";
			cout<<endl;
		}
}
