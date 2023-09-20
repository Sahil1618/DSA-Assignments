// Ques : If the marks of A, B and C are input through the keyboard,
// write a program to determine the student scoring least marks.
#include <iostream>
using namespace std;
int main() {
    int m1, m2, m3;
    cout << "Enter Marks of A, B, and C" << endl;
    cin >> m1 >> m2 >> m3;

    if (m1 < m2 && m1 < m3) {
        cout << "A scored the least marks." << endl;
    } else if (m2 < m1 && m2 < m3) {
        cout << "B scored the least marks." << endl;
    } else if (m3 < m1 && m3 < m2) {
        cout << "C scored the least marks." << endl;
    } else {
        cout << "There is a tie in the scores." << endl;
    }

    return 0;
}