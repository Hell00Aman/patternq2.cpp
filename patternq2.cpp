#include <bits/stdc++.h>
using namespace std;

// Function to print a square pattern of stars
void print1(int n) {
    // Outer loop controls the number of rows
    for (int i = 0; i < n; i++) {
        // Inner loop controls the number of columns
        for (int j = 0; j <= i; j++) {
            cout << "* ";  // print star with space
        }
        cout << endl;  // move to the next line after each row
    }
}

int main() {
    int n;
    cin >> n;       // take input for size of pattern
    print1(n);      // call function to print pattern
    return 0;
}
