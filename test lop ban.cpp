#include <iostream>  
using namespace std;


class BaseClass{
private:
    string a, b, c;
public:
    void nhap()
    	{
    		cin>>a>>b>>c;
		}
    friend class FriendClass;
};


class FriendClass{
public:
    void print(BaseClass p)
    {
        cout<<p.a<<p.b<<p.c;
    }
};
int main()
{   
    
    BaseClass b;
    b.nhap();
    FriendClass f;

  	f.print(b);
    return 0;
}


