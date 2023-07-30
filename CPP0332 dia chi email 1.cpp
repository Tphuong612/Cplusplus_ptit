// su dung cach nhap va tach theo kieu char
#include <bits/stdc++.h>
using namespace std;

int main()
	{
		char a[105];
		cin.getline(a, 104);
		for (int i=0;i<strlen(a);i++)
			a[i]= tolower(a[i]);
		char *p=strtok(a," ");// p o day la 1 con tro cuo 1 chuoi ki tu, neu de kieu char thi se dung dc ham strtok, neu de string thi ko dc
		vector <string> v;// tao 1 mang dong string de luu cac tu
		int i=0;
		while(p!=NULL)
			{
				v.push_back(p);// sao chep cac gia tri con tro p ve mang vecto;
				i++;
				p=strtok(NULL," ");
			}
		cout<<v[v.size()-1];
		for(int i=0;i<v.size()-1;i++)
			cout<<v[i].front();
//			cout<<v[i].substr(0,1);
		cout<<"@ptit.edu.vn";
		
	}
	
