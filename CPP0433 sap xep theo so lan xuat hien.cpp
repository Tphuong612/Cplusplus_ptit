#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
	{
		return a.second>b.second;
		if(a.second==b.second) return a.first<b.first;
	}
void solve()
	{
		int n;
		cin>>n;
		int a[n];
		map <int, int> m;
		for(int i=0;i<n;i++)
			{
				cin>>a[i];
				m[a[i]]++;
			}
		vector<pair<int, int>> v;
		
		for(auto &x: m)
			v.push_back(make_pair(x.first, x.second));
		sort(v.begin(), v.end(), cmp);
		for(auto &x: v)
			for(int i=0;i<x.second;i++) cout<<x.first<<" ";
		cout<<endl;
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			solve();	
		}
}
