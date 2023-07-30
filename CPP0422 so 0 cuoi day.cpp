#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				int n;
				cin>>n;
				long long a[n+5];
				vector <long long> b;
				for(int i=0;i<n;i++)
					{
						cin>>a[i];
						if(a[i]!=0) b.push_back(a[i]);
					}
				for(auto x:b)
					{
						cout<<x<<" ";
					}
				for(int i=b.size();i<n;i++)
					cout<<"0 ";
				cout<<endl;
			}
	}
