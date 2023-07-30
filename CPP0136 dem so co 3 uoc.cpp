#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
ll checknt(ll n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
	
}
int main(){
	int t;
	cin>>t;
	while(t--)
		{
			long long n;
			cin>>n;
			long long dem=0;
			for(int i=1;i<=sqrt(n);i++)
				{
					if(checknt(i)==1) dem++;
				}
			cout<<dem<<endl;
		}

}

