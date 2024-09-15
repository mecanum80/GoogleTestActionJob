#include<iostream>

#include"MathOperation.hpp"


int main() {
    MathOpeeration mathOperation;
    std::cout << mathOperation.add(1, 2) << std::endl;
    std::cout << mathOperation.substract(1, 2) << std::endl;
    return 0;
}