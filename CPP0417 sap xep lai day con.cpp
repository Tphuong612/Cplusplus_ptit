// y tuong: tao 2 vecto, 1 vector giu nguyen thu tu ban dau, 1 vector sap xep tu be den lon, roi so sanh xem cac phan tu khac o cac vi tri nao
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			int n;
			cin>>n;
			int a[n+5], b[n+5];
			for(int i=0;i<n;i++)
				{
					cin>>a[i];
					b[i]=a[i];
				}
			sort(b, b+n);
			int l,r;
			int i=0;
			while(a[i]==b[i]) i++;
			l=i+1;
			int j=n-1;
			while(a[j]==b[j]) j--;
			r=j+1;
			cout<<l<<" "<<r<<endl;
			
			
		}
}
