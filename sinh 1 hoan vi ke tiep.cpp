#include <bits/stdc++.h>
using namespace std;
int n, a[100];
void sinhhoanviketiep()
	{
		int j=n-1;
		while(j>0&&a[j]>a[j+1]) j--; //tim vi tri sao cho a[j]<a[j+1]
		if(j>0)
			{
				int k=n;
				while (a[j]>a[k]) k--; // tim vi tri a[k] sao cho a[j]<a[k];
				swap(a[j], a[k]);
				int r=j+1, s=n;
				while(r<=s)// lat nguoc lai
					{
						swap(a[r], a[s]);
						r++; s--;
					}
			}
		
	}
int main()
{
	cin>>n;
	int t=4;
	while(t--)
		{
			
			for(int i=1;i<=n;i++)
				cin>>a[i];
			sinhhoanviketiep();
			cout<<" ke tiep thu "<<4-t<<":";
			for(int i=1;i<=n;i++)
				cout<<a[i]<<" ";
			cout<<endl;
		}
}
