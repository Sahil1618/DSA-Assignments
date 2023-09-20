#include <iostream>
using namespace std;
int main (){
    float l , b ;
    cout << "Enter Length of Rectangle : "<<endl;
    cin >> l; 
    cout << "Enter Breadth of Rectangle : "<<endl;
    cin >> b; 

    float area = l*b ; 
    float perimeter = 2*(l*b);

    if (area > perimeter){
        cout<< "Area is greater. "<<endl;
    } else {
        cout <<"Perimeter is Greater."<<endl;
    }
    
}