#include <iostream>
using namespace std;
int main (){
    int n;
    int reverse =0;
    int ld = 0;
    cout <<"Enter a number : ";
    cin >> n;
    int org_number = n;

    while (n>0){
        reverse *= 10;          
        ld = n%10;         
        reverse += ld;   
        n /=10;                     
    }
    
    cout << "sum of "<< org_number << " and it's reverse is : " << (org_number + reverse) <<endl;
    
}