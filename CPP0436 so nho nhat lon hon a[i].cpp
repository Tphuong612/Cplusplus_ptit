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
			for(int i=0;i<n;i++)
				{
					auto p=upper_bound(b, b+n, a[i]);
					auto k=p-b;
					if(k!=n) cout<<*p<<" ";
					else cout<<"_"<<" ";
				}
			cout<<endl;
		}
}
