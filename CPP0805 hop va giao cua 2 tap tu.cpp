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
	fstream in1, in2;
	in1.open("DATA1.in", ios::in);
	set <string> st1, st2, st3, st4;
	// set 1 chua file 1, set 2 chua file 2, set 3 chua giao, set 4 chua hop
	string s1,s2;
	while(in1>>s1)
		{ 
			chuanhoa(s1);
			st1.insert(s1);
			st3.insert(s1);
		}
	in2.open("DATA2.in", ios::in);
	while(in2>>s2)
		{
			chuanhoa(s2);
			st2.insert(s2);
			st3.insert(s2);
		}
	for(auto x:st1)// tim giao
		{
			if(st2.find(x)!=st2.end()) st4.insert(x); 
		}
	for(auto x:st3)
		cout<<x<<" ";
	cout<<endl;
	for(auto x:st4)
		cout<<x<<" ";
	return 0;
}
