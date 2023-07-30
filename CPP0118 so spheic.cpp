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
			set <int> s;
			int dem=0;
			int i=2;
			while(n!=1)
				{
					if(n%i==0)
						{
							n=n/i;
							s.insert(i);
							dem++;
						}
					else i++;
				}
			if(s.size()==3&&dem==3) cout<<"1\n";
			else cout<<"0\n";
		}
}
