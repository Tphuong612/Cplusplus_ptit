#include <bits/stdc++.h>
using namespace std;
int cal(string &a)
	{
		int n=0;
		for(int i=0;i<a.length();i++)
		 	{
		 		if(isdigit(a[i])==0) return 0;
				n=n*10+a[i]-'0';	
			}
		return n;
	}
int main()
{
	fstream in;
	in.open("DATA.in", ios::in);
	string tmp;
	long long sum=0;
	while(in>>tmp)
		{
			sum+=cal(tmp);
		}
	cout<<sum;
	return 0;
}