// hop va giao cua 2 mang
// c1: dung map, neu xuat hien 2 lan thi la giao, xuat hien thi la hop
// c2: so sanh thuan, so sanh tung phan tu cua mang nay voi cac phan tu cua mang kia
#include <bits/stdc++.h>
using namespace std;
// c2:
void hop_giao()
	{
		int n,m;
		cin>>n>>m;	
		int a[n+5], b[n+5];
		map <int, int> mp;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		vector <int> hop, giao;
		int i=0, j=0;
		while(i<n&&j<m)
			{
				if(a[i]<b[j]) {
					hop.push_back(a[i]);
					i++;
				}
				else if(b[j]<a[i]){
					hop.push_back(b[j]);
					j++;
				}
				else {// tuc la a[i]=b[i]
					giao.push_back(a[i]);
					hop.push_back(a[i]);
					i++;j++;
				}
			}
		while(i<n) 
			{
				hop.push_back(a[i]);
				i++;
			}
		while(j<m)
			{
				hop.push_back(b[j]);
				j++;
			}
		for(auto x: hop) cout<<x<<" ";
		cout<<endl;
		for(auto x:giao) cout<<x<<" ";
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
