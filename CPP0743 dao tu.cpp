#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	scanf("\n");
	while(t--)
		{
			string s;
			getline(cin, s);
			stack <string> a;
			stringstream ss(s);
			string tmp;
			while(ss>>tmp)
				{
					a.push(tmp);
				}
			while(!a.empty())
				{
					cout<<a.top()<<" ";
					a.pop();
				}
			cout<<endl;
		}
}
