//
//  main.cpp
//  cppl-homework-05.01
//
//  Created by a1ex on 2/16/24.
//

#include <iostream>
#include <vector>


template<class T>
T squaring(T a)
{
   return a * a;
};

template<class T>
std::vector<T> sqr(std::vector<T> &v)
{
    std::vector<T> result (v.size());
  for(int i=0; i<v.size(); i++)
  {
      result[i] = v[i]*v[i];
  }
  return result;
}
    


int main(int argc, const char * argv[]) {
    
    auto a = 0;
   
    
    
    std::cout << "Squaring function" << std::endl;
    std::cout << "[IN]: ";
    std::cin >> a;
    std::cout << "[OUT]: " << squaring(a) << std::endl;
  
    std::cout << a << std::endl;
    
    std::cout<< "Squaring array function" << std::endl;
    std::cout << "[IN]: ";
    std::vector<int> b = { 4, 17, -3, 6 };
      for(int i = 0; i < b.size(); i++)
        {
      std::cout << b[i] << " ";
        }
    std::cout << std::endl;

    sqr<int>(b);
    std::vector<int> squared = sqr<int>(b);
    std::cout << "[OUT]: ";
      for(const auto& elem : squared)
      {
          std::cout << elem << " ";
      }
    std::cout << std::endl;
    return 0;
}
