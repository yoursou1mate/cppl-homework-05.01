//
//  arr_squaring.cpp
//  cppl-homework-05.01
//
//  Created by a1ex on 2/16/24.
//

#include "arr_squaring.hpp"

#include <iostream>
#include <cmath>


template<class T>
class simpleArray
{
private:
    T* elements = nullptr;
    std::size_t size;
public:
    simpleArray(std::size_t size)
        {
            this->size = size;
            elements = new T[size];
        }
    
    void set_arr (size_t)
    {
        for(int i = 0; i < size; ++i)
        {
            std::cin >> elements[i];
        }
    }
    
    void squaringArray () const
       {
         T result = 0;
           for(int i = 0; i < size; ++i)
           {
              std::cout << std::pow(elements[i], 2) << " ";
           }
       }
    
    T& operator[](std::size_t index)
    {
        if (index >= size) {
            throw std::out_of_range("Index out of bounds");
        }
        return elements[index];
    }
    
    ~simpleArray ()
    {
        delete [] elements;
    }
    
    
};

