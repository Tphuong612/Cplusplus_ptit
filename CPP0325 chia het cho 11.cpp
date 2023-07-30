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
					{
						if(i%2==0) s+=a[i]-'0';
						else s+=-a[i]+'0';
					}
//				cout<<s<<endl;
				if(s%11==0) cout<<"1\n";
				else cout<<"0\n";
			}
	}
