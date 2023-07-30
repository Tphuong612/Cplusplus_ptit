#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	map <string, int> m;
	while(n--)
		{
			string s;
			getline(cin, s);
			
			for(int i=0;i<s.length();i++) s[i]=tolower(s[i]);
			stringstream ss(s);
			string cmp;
			vector <string> v;
			while(ss>>cmp)
				{
					v.push_back(cmp);
				}
			string res=v[v.size()-1];
			for(int i=0;i<v.size()-1;i++) res+=v[i][0];
			if(m[res]==0) cout<<res<<"@ptit.edu.vn"<<endl;
			else 
				cout<<res<<m[res]+1<<"@ptit.edu.vn"<<endl;
			m[res]++;
		}
}
