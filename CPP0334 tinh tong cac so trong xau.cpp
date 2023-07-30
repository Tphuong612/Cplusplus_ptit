// thay ki tu chu bang dau cach
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			string s;
			cin>>s;
			for(int i=0;i<s.length();i++) 
				{
					if(isdigit(s[i])==0) s[i]=' ';
				}
			stringstream ss(s);
			string so;
			long long sum=0;
			while(ss>>so)
				{
					sum+= stoll(so);
				}
			cout<<sum<<endl;
		}
}
