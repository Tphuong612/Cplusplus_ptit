#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	int t; 
	cin>>t; 
	while(t--)
		{ 
			string s; 
			cin>>s; 
			int tmp=s.find("084"); 
			cout<<s.erase(tmp,3)<<endl; // do bai nay bao chi xuat hien 1 lan
		} 
}