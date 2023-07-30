#include <bits/stdc++.h>
using namespace std;
class SinhVien
{
	private:
		string msv, ht, l, ns;
		float gpa;
	public:
		SinhVien()
		{
			this->msv="B20DCCN001";
			this->ht="";
			this->l="";
			this->ns="";
			this->gpa=0;
		}
		friend istream& operator >>(istream& in, SinhVien& a);
		friend ostream& operator <<(ostream& out, SinhVien a);
		
};
istream& operator>>(istream& in, SinhVien& a)
{
	getline(in, a.ht);
	getline(in, a.l);
	getline(in, a.ns);
	if(a.ns[2]!='/') a.ns="0"+a.ns;
	if(a.ns[5]!='/') a.ns.insert(3,"0");
	cin>>a.gpa;
	cin.ignore();
	return in;
}
ostream& operator <<(ostream& out, SinhVien a)
{
	cout<<a.msv<<" "<<a.ht<<" "<<a.l<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
	return out;
}
int main()
	{
		SinhVien a;
	    cin >> a;
	    cout << a;
	    return 0;

	}
