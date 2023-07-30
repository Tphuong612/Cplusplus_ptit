#include <bits/stdc++.h>
using namespace std;
int cnt=0;
class SinhVien{
	private:
		string id, ht, lp, ns;
		float gpa;
	public:
		SinhVien()
			{
				this->id="B20DCCN0";
				this->ht="";
				this->lp="";
				this->ns="";
			}
//		void chuanhoangay()
//			{
//				if(ns[2]!='/') ns="0"+ns;
//				if(ns[5]!='/') ns.insert(3,"0");
//			}
		void chuanhoangay(string &s)
			{
				if(s[2]!='/') s="0"+s;
				if(s[5]!='/') s.insert(3,"0");
			}
		friend istream &operator >> (istream &in, SinhVien &a )
			{
				in.ignore();
				cnt++;
				getline(in, a.ht);
				getline(in,a.lp);
				getline(in, a.ns);
				in>>a.gpa;
				if(cnt<10) a.id+="0"+to_string(cnt);
				else a.id+=to_string(cnt);
				a.chuanhoangay(a.ns);
//				a.chuanhoangay();
					
				return in;
			}
		friend ostream &operator <<(ostream &out, SinhVien a)
			{
				cout<<a.id<<" "<<a.ht<<" "<<a.lp<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
				return out;
			}
};
int main()
	{
		SinhVien ds[50];
	    int N, i;
	    cin >> N;
	    for(i=0;i<N;i++){
	        cin >> ds[i];
	    }
	    for(i=0;i<N;i++){
	        cout << ds[i];
	    }
	    return 0;
	}
