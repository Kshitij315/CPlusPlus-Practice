#include <iostream>
#include <limits>

int main() {
    const int MAX_LENGTH = 15;  // Intentionally small to demonstrate overflow
    char input[MAX_LENGTH];

    std::cout << "Enter a long string: ";
    std::cin.getline(input, MAX_LENGTH);

    if (std::cin.fail()) {
        std::cout << "Input was too long. Buffer overflow prevented." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } else {
        std::cout << "You entered: " << input << std::endl;
    }

    return 0;
}