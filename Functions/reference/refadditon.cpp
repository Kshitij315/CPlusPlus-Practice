#include <cstdio>
#include<iostream>
#include <string>

int main(void)
{
    int value = 10;
int& ref = value;

ref += 5; // This is equivalent to value += 5; (Modifies the original value through the reference)
std::cout << value;
std::string message = "Hello";
std::string& ref_message = message;

ref_message += ", World!"; // Behavior depends on string class implementation (might concatenate)
std::cout << "value of meesage: " << ref_message <<std::endl;
}