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
				for(int i=0;i<n;i++)
					cin>>a[i];
				sort(a, a+n);
				multiset <long long> s;
				for(int i=0;i<n-1;i++)
					{
						long long c=abs(a[i+1]-a[i]);
						s.insert(c);
					}
				cout<< *s.begin()<<endl;
				s.clear();
			}
	}
