#include <iostream> // Required for input and output operations

int main() {
    int userNumber; // Variable to store the input

    // Output: Prompting the user for input
    std::cout << "Enter an integer: ";

    // Input: Reading the number from the keyboard
    std::cin >> userNumber;

    // Output: Printing the value back to the screen
    std::cout << "You entered: " << userNumber << std::endl;

    return 0;
}