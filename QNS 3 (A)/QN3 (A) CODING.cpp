#include <iostream>
using namespace std;

// Function to calculate the sum from 'first' to 'last'
int sum_from_to(int first, int last) {
    int sum = 0;

    // Loop from 'first' to 'last' and add each number to 'sum'
    for (int i = first; i <= last; ++i) {
        sum += i;
    }

    return sum;
}

int main() {
    int firstNumber, lastNumber;

    // Prompt the user for the first and last numbers
    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the last number: ";
    cin >> lastNumber;

    // Call the function and store the result
    int result = sum_from_to(firstNumber, lastNumber);

    // Output the result
    cout << "The sum from " << firstNumber << " to " << lastNumber << " is: " << result << endl;

    return 0;
}

