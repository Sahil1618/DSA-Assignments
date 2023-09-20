#include <iostream>
using namespace std;
int main (){
    int r ;
    int pi = 3.14;
    cout << "Enter Radius of Circle : "<<endl;
    cin >> r; 

    if ((pi*r*r)>(2*pi*r)){
        cout<< "Area is greater. "<<endl;
    } else {
        cout <<"Circumference is Greater."<<endl;
    }
    
}