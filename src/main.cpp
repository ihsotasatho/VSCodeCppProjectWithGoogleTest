#include "sample.hpp"
#include <iostream>

int main(int argc, char* argv[])
{
    int number = 10;

    Sample sum {number};
    int result = sum.AddAllNumberFromZero();

    std::cout << "Number: " << number << " Result: " << result << std::endl; 
}