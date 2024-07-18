#include <cstdio>
#include <string>
#include <iostream>

int main(void){

int value1 = 5;
int value2 = 10;
int& ref1 = value1;
int& ref2 = value2;

int sum = ref1 + ref2; // Dereference and add the actual values
std::cout << "Sum: " << sum << std::endl;  // Prints 15
}