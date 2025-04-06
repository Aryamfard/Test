#include <iostream>

int main() {
    // Declare variables
    int num1, num2, sum;

    // Ask user for input
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}
