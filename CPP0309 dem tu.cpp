#include <bits/stdc++.h> 
using namespace std; 
int main()
	{ 
		int t; 
		cin>>t; 
		cin.ignore(); 
		while(t--)
		{ 
			string s; 
			getline(cin,s); 
			stringstream tach(s); //truyen du lieu cua s sang tach
			
			string check; 
			int sotu=0; 
			while(tach>>check)// dau >> cho phep tach ko doc nhung ki tu mang nghia la dau cach
				{ 
					sotu++; 
				} 
			cout<<sotu<<endl; 
		} 
	}