#include <bits/stdc++.h>
using namespace std;
struct sv
	{
	    string msv, name, lop, email;
	};

bool cmp(sv &a, sv &b)
	{
	    return a.msv < b.msv;  
	}
sv a[1005];
int main()
	{
		int i=0;
		while(cin >> a[i].msv)
		    {
		        cin.ignore();
		        getline(cin, a[i].name);
		        getline(cin, a[i].lop);
		        getline(cin, a[i].email);
		        i++;
		    }
		int n=i;
	    sort(a, a + n, cmp);
	    for(int j=0;j<n;j++) cout << a[i].msv << ' ' << a[i].name << ' ' << a[i].lop << ' ' << a[i].email << endl;
	    return 0;
	}
