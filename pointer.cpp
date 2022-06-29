#include <iostream>
#include <vector>
class MyClass
{
public:
    void MyFunc();
};
int main()
{
    std::vector<int> vector_int;
    std::vector<int> *vec_ptr = &vector_int;
    MyClass obj;
    MyClass *obj_ptr = &obj;
    obj.MyFunc();
    MyClass *obj_ptr = &obj;
    obj_ptr->MyFunc();
    
}
