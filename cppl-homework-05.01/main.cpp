//
//  main.cpp
//  cppl-homework-05.01
//
//  Created by a1ex on 2/16/24.
//

#include <iostream>
#include "template_func.hpp"
#include "arr_squaring.hpp"


int main(int argc, const char * argv[]) {
    
    auto a = 0;
    int size;
    
    
    std::cout << "Squaring function" << std::endl;
    std::cout << "[IN]: ";
    std::cin >> a;
    std::cout << "[OUT]: " << squaring(a) << std::endl;
  
    std::cout<< "Squaring array function" << std::endl;
    std::cout << "Please enter size of your array: ";
    std::cin >> size;
    std::cout << "[IN]: ";
    simpleArray<int> arr(size);
    arr.set_arr(size);
    std::cout << "[OUT]: ";
    arr.squaringArray();
    
    
    return 0;
}
