#include <vector>
#include <iostream>

template <class T>
class MyClass
{
public:
    MyClass(T x) : x_(x) {}

private:
    T x_;
};
int main()
{
    MyClass<int> my_integer_object(10);
    MyClass<double> my_double_object(10.0);
    return 0;
}