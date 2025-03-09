#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Upper half of the diamond
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " "; // Print leading spaces
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*"; // Print stars
        }
        cout << endl; // Move to the next line
    }

    // Lower half of the diamond
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " "; // Print leading spaces
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*"; // Print stars
        }
        cout << endl; // Move to the next line
    }

    return 0;
}

// Output:


