#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int t;
		cin>>t;
		cin.ignore();
		while(t--)
			{
				string a;
				getline(cin,a);
				int s=0;
				for(int i=0;i<a.size();i++)
					s+=a[i]-'0';
				if(s%11==0) cout<<"1\n";
				else cout<<"0\n";
			}
	}
