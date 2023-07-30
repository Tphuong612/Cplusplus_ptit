#include <iostream>  
using namespace std;

/*Khai báo class nguồn*/
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

/*Khai báo class bạn của class nguồn*/
class FriendClass{
public:
    void print(BaseClass p)
    {
        cout<<p.a<<p.b<<p.c;
    }
};
int main()
{   
    /*Tạo instance của class nguồn và class bạn*/
    BaseClass b;
    FriendClass f;

    /*Truy cập vào biến private của lớp nguồn*/
    f.print(b);//BaseClass called
    return 0;
}


Source: http://laptrinhcanban.com/cpp/lap-trinh-cpp-co-ban/huong-doi-tuong-trong-cpp/friend-class-trong-cpp/#Friend-trong-C-la-gi