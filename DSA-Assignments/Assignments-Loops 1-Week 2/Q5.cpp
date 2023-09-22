#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter a number :";
    cin >> n ;
    for(int i = 3; i<=n; i=i*4){
        cout << i << endl;
    }
}