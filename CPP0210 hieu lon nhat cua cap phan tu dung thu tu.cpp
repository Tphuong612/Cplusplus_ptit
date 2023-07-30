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
			int a[n+5];
			int max=-1, res=-1;
			for(int i=1;i<=n;i++) cin>>a[i];
			for(int i=1;i<n;i++)
				{
					for(int j=i+1;j<=n;j++)
						{
							if(a[j]>a[i]) res=a[j]-a[i];
							if(max<res) max=res;
						}	
				}
			if(max==-1) cout<<"-1\n";
			else cout<<max<<endl;
		}
}
