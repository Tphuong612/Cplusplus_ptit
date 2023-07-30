#include <bits/stdc++.h>
using namespace std;
int main()
{
	fstream in;
	in.open("DATA.in", ios::in);
	map <int, int> m;
	int n;
	while(in>>n)
		{
			m[n]++;
		}
	for(auto x:m)
		{
			cout<<x.first<<" "<<x.second<<endl;
		}
}
