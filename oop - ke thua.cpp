#include <bits/stdc++.h>
using namespace std;
// base class: class cha
// derived class: class con
class person{
	private:
		string name;
		string address;
	public:
		person(string name, string address)
			{
				this->name=name;
				this->address=address;
			}
		void nhap()
			{
				getline(cin, name);
				getline(cin, address);
			}
		string getname()
			{
				return name;
			}
		string getaddress()
			{
				return address;
			}
		void setname(string name){
			this->name=name;
		}
		void setaddress(string address){
			this->address=address;
		}
		void in(){
			cout<< name<<" "<< address<<" ";
		}
};
class student: public person{
	private:
		float gpa;
	public:

//		su dung constructor
		string(string name, string address, float gpa): person(name, address){
			this->gpa;
		}
		float getgpa(){
			return gpa;
		}
		void setgpa(float gpa){
			this->gpa=gpa;
		}
		void nhap(){// function overriding - ghi de
			person::nhap();
			cin>>gpa;
		}
//		void in1(){
//			cout<<name<<" "<<address<<" "<<gpa<<endl; // bao loi do luu y o duoi, sua lai la void in2 hoac la void in
//		}
		
		// sua lai
//		void in2(){
//			cout<<getname()<<" "<<getaddress()<<" "<<gpa<<endl;
		}
		void in(){// function overriding - ghi de
			person::in();// goi ham in o class person qua toan tu pham vi ::
			cout<<fixed<<setprecision(2)<<gpa<<endl;
		}
		
	
};

class lecturer: public person{
	private:
		double salary;
};

class employee: public person{
	private:
		int dayatwork;// so ngay lam viec
};
int main()
{
	student s; // co tat ca thuoc tinh cua class cha va thuoc tinh cua chinh no
	
			// tuy nhien cai gi la private cua class cha thi class con cung van khong the truy cap 1 cach truc tiep duoc va phai thong qua cac ham get, set
	s.nhap();// neu ma khong dinh nghia lai ham  nhao cua lop con thi se goi ham nhap cua lop cha cua no (tinh ke thua)
	s.in();
}
