// su dung set, va ham tim kiem find trong set
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
		{
			string s1, s2;
			getline(cin, s1);
			getline(cin, s2);
			stringstream ss1(s1), ss2(s2);
			string word1, word2;
			set <string> st1, st2;
			while(ss1>>word1)
				{
					st1.insert(word1);
				}
			while(ss2>>word2)
				{
					st2.insert(word2);
				}
			for(auto x: st1) 
				{
					if(st2.find(x)==st2.end()) // neu string x (thuoc s1) khong ton tai trong set st2 thi in ra
						cout<<x<<" ";
				}
			cout<<endl;
		}
}
