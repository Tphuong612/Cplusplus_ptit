#include <bits/stdc++.h>
using namespace std;
long long somin(long long x)
	{
		string s=to_string(x);
		for(int i=0;i<s.length();i++)
			{
				if (s[i]=='6') s[i]='5';
			}
		long long p=stoll(s);
		return p;	
	}
long long somax(long long x)
	{
		string s=to_string(x);
		for(int i=0;i<s.length();i++)
			{
				if (s[i]=='5') s[i]='6';
			}
		long long p=stoll(s);
	
		return p;
	}
long long min(long long x1, long long x2)
	{
		return somin(x1)+somin(x2);
	}
long long max(long long x1, long long x2)
	{
		return somax(x1)+somax(x2);
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			long long x1, x2;
			cin>>x1>>x2;
			cout<<min(x1,x2)<<" "<<max(x1,x2)<<endl;
			
		}
}