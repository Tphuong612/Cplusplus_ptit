#include <bits/stdc++.h>
using namespace std;
int checkTN(string a)
	{
		for(int i=0;i<=a.size()/2;i++)
			{
				if(a[i]!=a[a.size()-i-1]) return 0;
			}
		return 1;
	}
int checkchan(string a)
	{
		for(int i=0;i<a.size();i++)
			{
				if(a[i]%2==1) return 0;
			}
		return 1;
	}
int main()
	{
		int t;
		cin>>t;
		cin.ignore();
		while (t--)
			{
				string a;
				getline(cin,a);
				if(checkTN(a)==1&&checkchan(a)==1) cout<<"YES\n";
				else cout<<"NO\n";
			}
	}
