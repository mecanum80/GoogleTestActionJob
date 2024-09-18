#include<iostream>

#include"MathOperation.hpp"


int main() {
    std::cout << MathOperation::add(1, 2) << std::endl;
    std::cout << MathOperation::substract(1, 2) << std::endl;
    std::cout << MathOperation::multiply(1, 2) << std::endl;
    std::cout << MathOperation::divide(1, 2) << std::endl;	
    return 0;
}