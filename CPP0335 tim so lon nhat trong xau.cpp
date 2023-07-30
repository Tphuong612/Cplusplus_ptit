// thay ki tu chu bang dau cach
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
			for(int i=0;i<s.length();i++)
				if(isdigit(s[i])==0) s[i]=' ';
			stringstream ss(s);
			string so;
			long long res=-9999;
			while(ss>>so)
				{
					long long x=stoll(so);
					res=max(x,res);
				}
			cout<<res<<endl;
		}
}
