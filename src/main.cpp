#include<iostream>

#include"MathOperation.hpp"


int main() {
    MathOperation mathOperation;
    std::cout << mathOperation.add(1, 2) << std::endl;
    std::cout << mathOperation.substract(1, 2) << std::endl;
    return 0;
}