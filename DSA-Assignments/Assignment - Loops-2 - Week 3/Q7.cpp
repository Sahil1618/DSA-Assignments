#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter a number to print factorial of : ";
    cin >> n;
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *=i;
        cout << fact <<endl;
    }
    
    
    
    
}