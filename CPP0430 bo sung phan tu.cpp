#include <bits/stdc++.h>
using namespace std;

int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				int n;
				cin>>n;
				set<int> s;
				for(int i=0;i<n;i++)
					{
						int x;
						cin>>x;
						s.insert(x);
					}
				int tmp=*s.begin();// bien chay 
				int dem=0;//dem so luong phan tu thuoc trong khoang min, max;
				while(tmp<=*s.rbegin())
					{
						tmp++;
						dem++;
					}
				cout<<dem-s.size()<<endl;
			}
	}
