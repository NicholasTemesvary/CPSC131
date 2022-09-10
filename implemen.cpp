#include "proto.hpp"
#include <string>

void Vector131::push_back (int size, int num){
    vec[size] = num;
    size++;
}

void Vector131::push_front (int num, int siz){
    if (num == capacity){
        std::push_front(num);
    }
    else {
        vec[siz] = num;
    }
}

int Vector131::resize(int size_declaration)
{
    std::cout << "what is the size of array?" << endl; 
    std::cin >> size_declaration;
    resize(size_declaration);      
    return size_declaration;
}


void Vector131::print() {
    for (int i = 0;i < size; i++)
    {
        std::cout << vec[i] << " ";
    }
}
