#include <fstream>
#include <iostream>

int main() {
    std::fstream file("example.txt", std::ios::in | std::ios::out | std::ios::binary);

    // Move to the 10th byte in the file
    file.seekg(10, std::ios::beg);

    // Read a character
    char ch;
    file.get(ch);
    std::cout << "Character at position 10: " << ch << std::endl;

    // Move 5 bytes forward from the current position
    file.seekp(5, std::ios::cur);

    // Write a character
    file.put('X');

    // Move to the end of the file
    file.seekp(0, std::ios::end);

    // Append some text
    file << "Appended text";

    file.close();
    return 0;
}