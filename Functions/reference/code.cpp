#include <iostream>

int& getLocalRef() {  // Function returns by reference (int&)
  int x = 10;         // Local variable
  return x;           // Returning reference to local variable
}

int main() {
  int& ref = getLocalRef(); // Reference assigned the address of x
  std::cout << ref << std::endl; // Undefined behavior (x is out of scope)
  return 0;
}