#include <bits/stdc++.h>
using namespace std;
int dem=0;
class sinhvien{
	private: 
		string msv, ht, lp, ns;// ma sinh vien, ho ten, lop, ngay sinh
		float gpa;
	public:
		void chuanhoa_ns(string &a)
			{
				if(a[2]!='/') a='0'+a;
				if(a[5]!='/') a.insert(3,"0");
				
			}
		friend istream &operator >> (istream &is, sinhvien &a)
			{
				scanf("\n");
				dem++;
				if(dem<10) a.msv="B20DCCN00"+to_string(dem);
				else a.msv="B20DCCN0"+to_string(dem);
				getline(cin, a.ht);
				getline(cin, a.lp);
				getline(cin, a.ns);
				cin>>a.gpa;
				
				a.chuanhoa_ns(a.ns);
				return is;
			}
		float getgpa()
			{
				return gpa;
			}
		friend ostream &operator << (ostream &os, sinhvien a)
			{
				cout<<a.msv<<" "<<a.ht<<" "<<a.lp<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
				return os;
			}
};
bool cmp(sinhvien a, sinhvien b)
	{
		return a.getgpa()>b.getgpa();
	}
int main()
{
	int n;
	cin>>n;
	sinhvien a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n, cmp);
	for(int i=0;i<n;i++) cout<<a[i];
}
