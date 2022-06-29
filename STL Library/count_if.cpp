#include <iostream>
#include <vector>
#include <algorithm>
inline bool div_by_3(int i){
    return i % 3 == 0;
}

int main(){
  std::vector<int> v{1,2,3,3,4,3,7,8,9,10};
  int n3 = std::count_if(v.begin(),v.end(),div_by_3);
  std::cout << "Divisible by 3: "<< n3 << std::endl;


}