#include <iostream>

template<typename T>
T Max(T a, T b) {
    return (a > b) ? a : b;
}
template<typename T>
T Min(T a, T b) {
    return (a < b) ? a : b;
}
int main() {
    int x = 10, y = 20;
    // std::cout << "Max of " << x << " and " << y << " is " << Max(x, y) << std::endl;

    // double p = 12.5, q = 9.8;
    // std::cout << "Max of " << p << " and " << q << " is " << Max(p, q) << std::endl;

    // std::string str1 = "Hello", str2 = "World";
    // std::cout << "Max of " << str1 << " and " << str2 << " is " << Max(str1, str2) << std::endl;

std::cout << "Max of " << x << " and " << y << " is " << Min(x, y) << std::endl;

    double p = 12.5, q = 9.8;
    std::cout << "Max of " << p << " and " << q << " is " << Min(p, q) << std::endl;

    std::string str1 = "Hello", str2 = "World";
    std::cout << "Max of " << str1 << " and " << str2 << " is " << Min(str1, str2) << std::endl;

    return 0;
}