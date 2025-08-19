#include <iostream>
using namespace std;

// Function to calculate (b^n) % m
long long modPower(long long b, long long n, long long m) {
    long long result = 1;
    b = b % m; // Ensure b is within mod first

    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * b) % m;
        }
        b = (b * b) % m;
        n /= 2;
    }

    return result;
}

int main() {
    long long b, n, m;

    cout << "Enter base (b): ";
    cin >> b;

    cout << "Enter exponent (n): ";
    cin >> n;

    cout << "Enter modulus (m): ";
    cin >> m;

    cout << "Result of (" << b << "^" << n << ") mod " << m << " is: " 
         << modPower(b, n, m) << endl;

    return 0;
}
