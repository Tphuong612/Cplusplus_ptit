#include <bits/stdc++.h>

using namespace std;
void solve()
	{
		char a[30];
		fgets(a, 31, stdin);
		int flag=1;
		int len=strlen(a);
		for(int i=0;i<len-2;i++)
			{
				if(abs(a[i]-a[i+1])!=1) flag=0;
			}
		if(flag==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
int main()
	{
		int t;
		cin>>t;
		cin.ignore();
		while (t--)
			{
				solve();
			}
		
	}
