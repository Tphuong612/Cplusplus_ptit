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
			long long a[n+5];
			set <long long> s;
			for(int i=0;i<n;i++) 
				{
					cin>>a[i];
					s.insert(a[i]);
				}
			for(int i=0;i<n;i++)
				{
					if(s.find(i)!=s.end()) 
						{
							cout<<i<<" ";
						}
					else cout<<"-1 ";
				}
			cout<<endl;
		}
	
}
