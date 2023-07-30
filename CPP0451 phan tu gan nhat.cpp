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
			vector <int> a(n);
			for(int i=0;i<n;i++) cin>>a[i];
			int k,x;
			cin>>k>>x;
			int l,r;
			int m=lower_bound(a.begin(), a.end(), x) - a.begin(a);
			// khong lay gia tri bang key
			if(a[m]==x)
				{
					r=m+1;
					l=m-1;
				}
			else
				{
					r=m;
					l=m-1;
				}
			// in theo thu tu tang dan
			for(int i=k/2-1;i>=0;i--) cout<<a[l-i]<<" ";
			for(int i=0;i<k/2;i++) cout<<a[r+i]<<" ";
			cout<<endl;
		}

}
