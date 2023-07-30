#include <bits/stdc++.h>
using namespace std;
int solve(long long n)
	{
	
			
		string a=to_string(n);
		if(n<0) a.erase(0,1);
		for(int i=0;i<a.length();i++)
			{
				if((i+1)%2==0)
					{
						if((a[i]-'0')%2!=0) return 0;
					} 
				else
					{
						if((a[i]-'0')%2!=1) return 0;
					}
			}
		return 1;
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			long long n;
			cin>>n;
			if(solve(n)==1) cout<<"YES\n";
			else cout<<"NO\n";
		}
	
}
