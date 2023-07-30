#include <bits/stdc++.h>
using namespace std;
int check1(vector <int> &so) //check so luong phan tu la chan hay le
	{
		if (so.size()%2==0) return 2;
		else return 1;
	}
int check2 (vector <int> &so)
	{
		int demle=0, demchan=0;
		for(int i=0;i<so.size();i++)
			{
				if (so[i]%2==0) demchan++;
				else demle++;
			}
		if(demchan>demle) return 2;
		else return 1;
//		cout<<demle<<" "<<demchan;
	}
int main()
	{
		int t;
		cin>>t;
		cin.ignore();
		while(t--)
			{
				string a;
				getline(cin,a);
				stringstream ss(a);
				string tmp;
				vector <int> so;
				while(ss>>tmp)
					{
						int b=stoi(tmp);// chuyen string sang dang int
						so.push_back(b);
					}
				if(check1(so)==2&&check2(so)==2||check1(so)==1&&check2(so)==1) cout<<"YES\n";
				else cout<<"NO\n";
				check2(so);
				
			}
	}
