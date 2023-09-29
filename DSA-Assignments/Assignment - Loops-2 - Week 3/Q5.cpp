#include <iostream>
using namespace std;

int main() {
    int x;
    int sum = 0;

    cout << "Enter a number you want to calculate the sum of even digits: ";
    cin >> x;

    while (x > 0) {
        int lastDigit = x % 10;

        if (lastDigit % 2 == 0) {
            sum += lastDigit;
        }

        x /= 10; 
    }

    cout << "Sum of even digits: " << sum << endl;

    return 0;
}
