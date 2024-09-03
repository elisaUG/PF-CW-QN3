#include <iostream>
using namespace std;

// Function to find the greatest common divisor (GCD) of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to reduce the fraction
int reduce(int &num, int &denom) {
    // Check if either number is zero or negative
    if (num <= 0 || denom <= 0) {
        return 0; // Return 0 to indicate failure
    }

    // Calculate the GCD of num and denom
    int divisor = gcd(num, denom);

    // Divide both num and denom by the GCD to reduce the fraction
    num /= divisor;
    denom /= divisor;

    return 1; // Return 1 to indicate success
}

int main() {
    int numerator, denominator;

    // Get numerator and denominator from the user
    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the denominator: ";
    cin >> denominator;

    // Call the reduce function and check if it was successful
    if (reduce(numerator, denominator)) {
        cout << "The reduced fraction is: " << numerator << "/" << denominator << endl;
    } else {
        cout << "Failed to reduce the fraction. Please enter positive integers only." << endl;
    }

    return 0;
}

