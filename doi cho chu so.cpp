#include <bits/stdc++.h>
using namespace std;
int check(string a)
	{
		for(int i=0;i<a.length()-1;i++)
			if(a[i]>=a[i+1]) return 0;
		return 1;
	}
void hoanvitrc(string a)
	{
		int n= a.length();
		int j=n-1-1;
		while(j>=0&&a[j]<=a[j+1]) j--;// tim phan tu so trc >so sau
		int max=j+1;// coi a[max] la phan tu lon nhat
		for(int i=j+1;i<n;i++)// tim phan tu lon nhat nam ben phai va nho hon a[j]
			{
				for(int m=i+1;m<n;m++)
					if(a[m]>a[i]&&a[m]<a[j]) k=m;
			}
		swap(a[j], a[k]);
		int l=j+1, r=n-1;
//		while(l<=r)
//			{
//				swap(a[l], a[r]);
//				l++;
//				r--;
//			}
		cout<<a<<endl;
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			string a;
			cin>>a;
			if(check(a)==1) cout<<"-1\n";
			else hoanvitrc(a);
		}
}
