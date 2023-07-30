#include <bits/stdc++.h>
using namespace std;
struct so{
	string gt;// gia tri
	int sl=0;// so lan
};
int checktn(string &a)
	{
		if(a.length()==1) return 0;
		for(int i=0;i<a.length()/2;i++)
			{
				if(a[i]!=a[a.length()-1-i]) return 0;
			}
		return 1;
	}
bool cmp(so a, so b)
	{
		if(a.gt.length()>b.gt.length()) return true;
		if(a.gt.length()<b.gt.length()) return false;
		return a.gt>b.gt;
	}
int main()
	{
		string x;
		map <string, int> m;
		while(cin>>x)
			{
				if(checktn(x)==1)
					{
						m[x]++;
//						m.insert(x, m[x]);
					}
			}
		vector <so> v;
		so a;
		for(auto x:m)
			{
				a.gt=x.first;
				a.sl=x.second;
				v.push_back(a);
			}
		sort(v.begin(), v.end(), cmp);
		for(auto x:v)
			{
				cout<<x.gt<<" "<<x.sl<<endl;
			}
		

	}
