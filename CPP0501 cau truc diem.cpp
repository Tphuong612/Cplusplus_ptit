#include <bits/stdc++.h>
using namespace std;
struct Point{
	double x,y;
};
void input(Point &a)
	{
		cin>>a.x>>a.y;
	}
double distance(Point a, Point b)
	{
		return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	}
int main()
	{
		struct Point a,b;
		int t;
		cin>>t;
		while(t--)
			{
				
				input(a); input(b);
				cout<<fixed<<setprecision(4)<< distance(a,b)<<endl;	
			}
	}
