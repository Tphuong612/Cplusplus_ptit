#include <bits/stdc++.h>
using namespace std;
bool cmp (int a, int b)
	{
		return a>b;
	}
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				int n,a;
				cin>>n>>a;
				string str=to_string(a);
				vector <int> k;
				for(int i=0;i<str.length();i++)
					k.push_back(str[i]-'0');
				vector <int> s;
				for(int i=0;i<k.size();i++)
					{
						int j=2;
						while(j<=k[i]) {
							s.push_back(j);
							j++;
						}
					}
				sort(s.begin(), s.end(), cmp);
				for(auto x:s)
					cout<<x;
			}
	}
