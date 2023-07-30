#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,b;
	cin>>n>>k>>b;// n chiec den, b chiec hong, k chiec phai hoat dong lien tiep
	int a[n+6];
	for(int i=1; i<=n;i++) a[i]=1;
	for(int i=1;i<=b;i++)
		{
			int x;
			cin>>x;
			a[x]=0;
		}
	int dem=0;
	for(int i=1;i<=k;i++)
		{
			if(a[i]==0) dem++;
		}
	int res=dem;
	for(int i=k+1;i<=n;i++)
		{
			if(a[i-k]==0) --dem;
			if(a[i]==0) ++dem;
			res=min(res, dem);
		}
	cout<<res<<endl;
}
