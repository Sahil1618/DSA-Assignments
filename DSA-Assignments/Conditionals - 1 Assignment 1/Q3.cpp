#include <iostream>
using namespace std;
int main (){
    int year ;
    cout << "Enter any year between of 2000 to 2100 : "<<endl;
    cin >> year; 

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        cout<< "It is a leap Year."<<endl;
    } else {
        cout <<"It is not a leap Year."<<endl;
    }
    
}