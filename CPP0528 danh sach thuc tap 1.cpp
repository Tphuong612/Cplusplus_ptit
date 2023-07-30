#include <bits/stdc++.h>
using namespace std;
//int i=0;
struct sv{
	int stt;
	string msv, ht, lp, email, dn;
	
	void in()
		{
			cout<<stt<<" "<<msv<<" "<<ht<<" "<<lp<<" "<<email<<" "<<dn<<endl;
		}
};
void nhap(sv a[], int n)
		{
			for(int i=0;i<n;i++)
			{
				a[i].stt=i+1;
				cin>>a[i].msv;
				cin.ignore();
				getline(cin, a[i].ht);
				cin>>a[i].lp>>a[i].email>>a[i].dn;
			}
		}
bool cmp(sv a, sv b)
	{
		return a.ht<b.ht;
	}
void solve(sv a[], int n, string ten)
	{
		vector <sv> v;
		for(int i=0;i<n;i++)
			{
				if(ten==a[i].dn)
					{
						v.push_back(a[i]);
					}
			}
		sort(v.begin(), v.end(), cmp);
		for(auto x:v)
			x.in();
	}
int main()
	{
		int n;
		cin>>n;
//		cin.ignore();
		sv a[n+5];
		nhap(a,n);
		int q;
		cin>>q;
//		cin.ignore();
		while(q--)
		{
			string ten;
			cin>>ten;
			solve(a, n, ten);
		}
		
			
	}
