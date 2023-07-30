#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				long long n;
				cin>>n;
				if(n%9==0) cout<<"9\n";
				else cout<<n%9<<endl;
			}
	}
