#include <bits/stdc++.h>// co the su dung set, sort
using namespace std;
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				int n;
				cin>>n;
				long long a[n+5];
				map<long,long> m;
				for(int i=0;i<n;i++)
					{
						cin>>a[i];
						m[a[i]]++;// tao map de xuat ra TH -1 
					}
				long long min1=a[0], min2;
				int i=0;
				while(i<n)
					{
						if(a[i]<min1)
							{ 
								min2=min1;
								min1=a[i];
							}
						else if (a[i]<min2&&a[i]>min1)
							{
								min2=a[i];
							}
						i++;
					}
				if(m.size()==1) cout<<"-1"<<endl;
				else cout<<min1<<" "<<min2<<endl;
			}
	}
