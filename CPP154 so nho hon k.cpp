#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			int n,k;
			cin>>n>>k;
			int a[n+5];
			for(int i=0;i<n;i++) cin>>a[i];
			int dem=0;// dem tat ca cac so trong mang xem co bao nhieu so nho hon k
			for(int i=0;i<n;i++)
				{
					if(a[i]<=k) dem++;
				}
			int cnt=0;
			// xem cua so dau tien co bao nhieu phan tu nho hon hoac bang k 
			for(int i=0;i<dem;i++)
				{
					if(a[i]<=k) cnt++;
				}
			int res=cnt;// res de luu ki luc so luong phan tu nho hon hoac bang k trong 1 cua so
			for(int i=dem;i<n;i++)// tim cua so co nhieu phan tu nho hon hoac bang k nhat
				{
					if(a[i-dem]<=k) --cnt;// phan tu vua bi loai ra khoi cua so
					if(a[i]<=k) ++cnt;// phan tu vua dc them vao
					res=max(cnt, res);
				}
			cout<<dem-res<<endl;
		}
}
