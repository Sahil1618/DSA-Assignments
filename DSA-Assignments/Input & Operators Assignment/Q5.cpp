#include <iostream>
using namespace std;

int main() {
    char ch1, ch2;

    cout << "Enter first character: ";
    cin >> ch1;
    
    cout << "Enter second character: ";
    cin >> ch2;

    int ascii_1 = int(ch1); // Convert char1 to ASCII value
    int ascii_2 = int(ch2); // Convert char2 to ASCII value

    int diff = ascii_1 - ascii_2;

    cout << "Difference of Ascii value of 2 numbers is: " << diff << endl;

    return 0;
}