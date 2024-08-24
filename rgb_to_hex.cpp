#include <iostream>
#include <string>

std::string toHex(int value) {
    const char *hexDigits = "0123456789ABCDEF";
    std::string hex = "";
    hex += hexDigits[(value >> 4) & 0xF];  // High nibble
    hex += hexDigits[value & 0xF];         // Low nibble
    return hex;
}

std::string rgbToHex(int r, int g, int b) {
    return "#" + toHex(r) + toHex(g) + toHex(b);
}

int main() {
    int r, g, b;
    std::cout << "Enter Red (0-255): ";
    std::cin >> r;
    std::cout << "Enter Green (0-255): ";
    std::cin >> g;
    std::cout << "Enter Blue (0-255): ";
    std::cin >> b;

    std::string hexColor = rgbToHex(r, g, b);
    std::cout << "Hex Color Code: " << hexColor << std::endl;

    return 0;
}
