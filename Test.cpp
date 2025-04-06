#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    // Declare variables
    int num1, num2, sum, minus;

    // Ask user for input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Calculate the sum
    sum = num1 + num2;
    minus = num1 - num2;

    // Display the result
    cout << "The sum is: " << sum << endl;
    cout << "The minus is: " << minus << endl;
    
    getch();
    return 0;
}
