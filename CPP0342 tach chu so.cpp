#include <bits/stdc++.h>
using namespace std;
void tong(string s)
	{
		long long sum=0;
		for(int i=0;i<s.length();i++) 
			{
				if(isdigit(s[i])!=0) sum+=s[i]-'0';
			}
		
		cout<<sum;
	}
void alpha(string s)
	{
		vector <char> v;
		for(int i=0;i<s.length();i++) 
			{
				if(isdigit(s[i])==0)
					{
						v.push_back(s[i]);
					}
			}
		sort(v.begin(), v.end());
		for(auto x: v)
			cout<<x;
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			string s;
			cin>>s;
			alpha(s);
			tong(s);
			cout<<endl;
		}
}
