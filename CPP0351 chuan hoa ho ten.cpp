#include <bits/stdc++.h>
using namespace std;
void chuanhoa1 (string s)
	{
		for(int i=0;i<s.length();i++) s[i]=tolower(s[i]);
		stringstream ss(s);
		string cmp;
		vector <string> v;
		while(ss>>cmp)
			{
				cmp[0]=toupper(cmp[0]);
				v.push_back(cmp);
			}
		cout<<v[v.size()-1]<<" ";
		for(int i=0;i<=v.size()-2;i++)
			cout<<v[i]<<" ";
		cout<<endl;
	}

void chuanhoa2(string s)
	{
	
		for(int i=0;i<s.length();i++) s[i]=tolower(s[i]);
		stringstream ss(s);
		string cmp;
		vector <string> v;
		while(ss>>cmp)
			{
				cmp[0]=toupper(cmp[0]);
				v.push_back(cmp);
			}
		for(int i=1;i<=v.size()-1;i++)
			cout<<v[i]<<" ";
		cout<<v[0]<<" ";
		cout<<endl;
	}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
		{
			int n;
			cin>>n;
			cin.ignore();
			string s;
			getline(cin, s);
			if(n==1) chuanhoa1(s);
			if(n==2) chuanhoa2(s);
		}
}
