#include <iostream>
#include <cstdio>

void printValue(int &value)
{
    std::cout << "Value: " << value << std::endl;
}

int main(void)
{
    const int constVal = 42;

    // This might seem like a quick solution, but it's risky
    int *nonConstPtr = const_cast<int *>(&constVal);
    *nonConstPtr = 100; // Modifying a const variable (unexpected behavior)

    printValue(*nonConstPtr); // Might print 100 (unexpected)

    return 0;
}