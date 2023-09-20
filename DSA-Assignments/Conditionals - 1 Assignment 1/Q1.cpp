#include <iostream>
using namespace std;
int main(){
    int n1 , n2 ; 
    cout << "Enter two integers :";
    cin >> n1 >> n2;
    if (n1>n2){
        cout << n1 <<" is the greatest of them" << endl;
    } else {
        cout << n2 <<" is the greatest of them" << endl;
    }
}