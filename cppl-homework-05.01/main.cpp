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
std::vector<T> squaring(std::vector<int> &v)
{
  for(int i=0; i<v.size(); i++){
    v[i] = v[i]*v[i];
  }
  return v;
}
    


int main(int argc, const char * argv[]) {
    
    auto a = 0;
   
    
    
    std::cout << "Squaring function" << std::endl;
    std::cout << "[IN]: ";
    std::cin >> a;
    std::cout << "[OUT]: " << squaring(a) << std::endl;
  
    std::cout<< "Squaring array function" << std::endl;
    std::cout << "[IN]: ";
    std::vector<int> b = { 4, 17, -3, 6 };
      for(int i = 0; i < b.size(); i++)
        {
      std::cout << b[i] << " ";
        }
    std::cout << std::endl;

    squaring<int>(b);
    std::cout << "[OUT]: ";
      for (int i = 0; i < b.size(); i++)
      {
        std::cout << b[i] << " ";
      }
    std::cout << std::endl;

    
    
    
    return 0;
}
