 //c1: su dung stringstream de tach ra tung string nho nho roi so sanh voi string b da nhap, neu khac thi in ra; 
#include <bits/stdc++.h>
using namespace std;
int main()
	{
		string a;
		getline(cin,a);
		string b;
		getline(cin,b);
		stringstream s(a);
		string tach;
		while(s>>tach)
			{
				if(tach!=b) cout<<tach<<" ";
			}
	}
