#include <bits/stdc++.h>
using namespace std;
void vietthuong(char b[305])
	{
		for(int i=0;i<strlen(b);i++)
			{
				if (b[i]>='A'&&b[i]<='Z')
					{
						b[i]=b[i]+32;
					}
			}
	}

int main()
	{
		char b[305];
		cin>>b;
		vietthuong(b);
		
		map <char, int> m;
		
		for(int i=0;i<strlen(b);i++)
			{
				m[b[i]]++;
			}
		m.erase('a');
		m.erase('e');
		m.erase('o');
		m.erase('u');
		m.erase('i');
		m.erase('y');
		for(int i=0;i<strlen(b);i++)
			{
				if(m[b[i]]!=0)
					{
						cout<<"."<<b[i];
						m[b[i]]==0;
					}
			}
		
	}
