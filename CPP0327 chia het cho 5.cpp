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
				long long r=0;
				int b=a.size();
				for(int i=0;i<b;i++)
					{
						r=2*r+(a[i]-'0');
						r=r%5;
					}
				
				if(r%5==0) cout<<"Yes\n";
				else cout<<"No\n";
			}
	}
