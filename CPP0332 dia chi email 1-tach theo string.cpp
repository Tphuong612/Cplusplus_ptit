#include <bits/stdc++.h> 
using namespace std; 
string lower(string a)// bien doi thanh chu thuong
	{ 
		for(int i=0;i<a.length();i++)
			{
				a[i]=tolower(a[i]); 
			} 
		return a; 
	} 
int main()
	{ 
		string s, word;
		getline(cin,s); 
		vector <string> a;// mang string
		stringstream ss(s);//  stringstream::>> toan tu phan tach bang dau cach khong phai bang dau phay
		while(ss>>word)
		 	{ 
				a.push_back(word);// copy vi coi nhu tu la 1 phan tu
			} 
		int n=a.size();
		cout<<lower(a[n-1]);
		for(int i=0;i<n-1;i++)
		  	{ 
			  cout<<(char)tolower(a[i][0]); 
			} 
		cout<<"@ptit.edu.vn"; 
		return 0;
	}