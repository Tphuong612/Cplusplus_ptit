#include<bits/stdc++.h> 
using namespace std; 
int main()
	{ 
		int t; 
		cin>>t; 
		while(t--)
			{ 
				int n; 
				cin>>n; 
				int a[n-1]; 
				int sum=0; 
				for(int &x:a) 
					{
						cin>>x;
						sum+=x; // lam duoc ntn vi de bai cho la cac stn lien tiep va chi co 1 so con thieu
					}
				cout<<(n+1)*n/2-sum<<endl; 
			} 
	}