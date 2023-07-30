// hop va giao cua 2 mang
// c1: dung map, neu xuat hien 2 lan thi la giao, xuat hien thi la hop
// c2: so sanh thuan, so sanh tung phan tu cua mang nay voi cac phan tu cua mang kia
#include <bits/stdc++.h>
using namespace std;
// c1:
void hop_giao()
	{
		int n,m;
		cin>>n>>m;	
		int a[n+5], b[n+5];
		map <int, int> mp;
		for(int i=0;i<n;i++)
			{
				cin>>a[i];
				mp[a[i]]++;
			}
		for(int i=0;i<m;i++)
			{
				cin>>b[i];
				mp[b[i]]++;
			}
		for(auto &x: mp)
			cout<<x.first<<" ";
		cout<<endl;
		for(auto &x: mp)
			{
				if(x.second>=2) cout<<x.first<<" ";
			}
		cout<<endl;
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			hop_giao();
		}
}
