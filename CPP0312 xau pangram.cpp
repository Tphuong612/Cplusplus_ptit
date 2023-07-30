#include<bits/stdc++.h> 
using namespace std; 
int main()
	{ 
		int n; 
		cin>>n;
		cin.ignore(); 
		while(n--)
			{ 
				cin.ignore(); 
				string a; 
				getline(cin,a); 
				int k; 
				cin>>k; 
				cin.ignore();
				set <char> s; 
				for(char x : a )
					{ 
						s.insert(x);
					} 
				int sum = s.size(); 
				if(k >= 26 - sum) cout<<"1"<<endl; 
				else cout<<"0"<<endl; 
			} 
				 
	} 