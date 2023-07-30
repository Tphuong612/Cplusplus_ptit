#include <bits/stdc++.h>
using namespace std;
bool test1(string a)
	{
		if(a[5]<a[6]&&a[6]<a[7]&&a[7]<a[9]&&a[9]<a[10]) return true;
		return false;
	}
bool test2(string a)
	{
		if(a[5]==a[6]&&a[6]==a[7]&&a[7]==a[9]&&a[9]==a[10]) return true;
		return false;
	}
bool test3(string a)
	{
		if(a[5]==a[6]&&a[6]==a[7]&&a[9]==a[10]) return true;
		return false;
	}
bool test4(string s)
	{
		for(int i=5;i<=10;i++)
			{
				if(i==8) continue;
				if(s[i]!='6'&&s[i]!='8') return false;
			}
		return true;
	}
	
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			string s;
			cin>>s;
			if(test1(s)||test2(s)||test3(s)||test4(s)) cout<<"YES\n";
			else cout<<"NO\n";
		}
}