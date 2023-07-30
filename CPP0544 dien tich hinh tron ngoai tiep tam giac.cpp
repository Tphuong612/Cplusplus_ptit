#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
struct diem{
	double x,y;
	void nhap()
		{
			cin>>x>>y;
		}
};
double kc(diem a, diem b)
	{
		return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	}
int checktg(diem a, diem b, diem c)
	{
		double ab=kc(a,b), ac=kc(a,c), bc=kc(b,c);
		if(ab+bc>ac&&ac+bc>ab&&bc+ac>ab) return 1;
		else return 0;
	}
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				diem a,b,c;
				a.nhap(), b.nhap(), c.nhap();
				if(checktg(a,b,c)==0) cout<<"INVALID\n";
				else 
					{
						double c1=kc(a,b), c2=kc(a,c), c3=kc(b,c);
						double s=(double)1/4*sqrt((c1+c2+c3)*(c1+c2-c3)*(c1+c3-c2)*(c2+c3-c1));
						double r=(double)c1*c2*c3/(4*s);
						cout<<fixed<<setprecision(3)<<PI*r*r<<endl;
					}
			}
	}
