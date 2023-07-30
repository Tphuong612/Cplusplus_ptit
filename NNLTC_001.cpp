#include<bits/stdc++.h> 
using namespace std; 
int main()
{ 
	vector<int> s; 
	int a[10000]={0}; 
//	char check=' '; 
	int n;
	while(cin>>n)
		{ 
//			int n; 
//			cin>>n; 
			s.push_back(n); 
			a[n]++; // mang tan so
//			check=getchar(); 
		} 
	for(int x:s)
		{ 
			if(a[x]>0)// in ra nhu ngay xua da hoc
				{ 
					cout<<x<<" "<<a[x]<<endl; 
					a[x]=0; 
				} 
		} 
	return 0;
}