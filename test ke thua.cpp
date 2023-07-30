
#include <iostream>
using namespace std;

/*Class cha*/
class BaseClass
{
public:
    void print()
    {
        cout << "BassClass\n";
    }
};

/*Class con được kế thừa từ class cha*/
class DerivedClass : public BaseClass
{
public:
    /*Thêm chức năng mới vào class con*/
    void printNew()
    {
        cout << "DerivedClass\n";
    }
};

int main()
{
    //Tạo instance từ class con
    DerivedClass dc;

    //Do class con được kế thừa từ cha nó, 
    //nên chúng ta có thể gọi và sử dụng tất cả các hàm thành viên từ trong class cha
    dc.print();          //BassClass

    //Và cũng có thể gọi chức năng chỉ có trong class con
    dc.printNew();         //DerivedClass

}