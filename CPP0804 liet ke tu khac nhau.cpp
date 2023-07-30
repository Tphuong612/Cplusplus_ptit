#include <bits/stdc++.h>
using namespace std;
string chuanhoa(string &a)
	{
		for(int i=0;i<a.length();i++)
			{
				a[i]=tolower(a[i]);
			}
		return a;
	}
int main()
{
	fstream in;
	in.open("VANBAN.in", ios::in);
	string tmp;
	set <string> s;
	while(in>>tmp)
		{
			chuanhoa(tmp);
			s.insert(tmp);
		}
	for(auto x:s)
		{
			cout<<x<<endl;
		}
}
