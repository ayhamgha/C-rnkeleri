#include <iostream>
#include <map>

using std::cout;
using std::endl;


int main(){
    using StudentList = std::map<int,std::string>;
    StudentList cpp_students;

    cpp_students.emplace(1509,"Nacho");
    cpp_students.emplace(1040,"Pepe");
    cpp_students.emplace(8820,"Marcelo");
    
    
    for (const auto& [id,name] : cpp_students){
        cout << "id: "<<id<<","<<name<<endl;

    }return 0;
}