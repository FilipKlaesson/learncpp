#include <iostream>

int main()
{
    int input{ };                               // User input number
    std::cout << "Enter an integer: ";          // Ask user to enter number
    std::cin >> input;                          // Provide input promt

    std::cout << "Double that number is: "      // Print double of user input
        << input * 2 << std::endl;
    return 0;
}