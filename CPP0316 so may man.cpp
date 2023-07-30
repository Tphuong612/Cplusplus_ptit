#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			string s;
			cin>>s;
			int sum=0;
			for(int i=0;i<s.length();i++) sum+=s[i]-'0';
			if(sum!=0&&sum%9==0) cout<<"1\n";// luu y truong hop sum=0;
			else cout<<"0\n";
		}
}
