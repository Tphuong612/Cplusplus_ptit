// dung set va do lon cua set=10 thi tha man yeu cau cua bai
#include <bits/stdc++.h>
using namespace std;
int check(string s)
	{
		if(s[0]=='0') return 0;
		for(int i=0;i<s.length();i++) 
			{
				if(isdigit(s[i])==0) return 0;
			}
		return 1;
	}
void check2(string s)
	{
		set <char> st;
		for(int i=0;i<s.length();i++)
			st.insert(s[i]);
		if(st.size()==10) cout<<"YES\n";
		else cout<<"NO\n";
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			string s;
			cin>>s;
			
			if(check(s)==0) cout<<"INVALID\n";
			else 
				{
					check2(s);
				}
		}
}
