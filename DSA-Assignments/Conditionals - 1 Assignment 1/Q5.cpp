#include <iostream>
using namespace std;
int main (){
    float s1 , s2 , s3 ; 
    cout << "Enter the 3 Sides of Triangle separating them with space"<<endl;
    cin >> s1 >> s2 >> s3;

    if (s1==s2 && s1==s3) {
        cout << "It is an Equilateral triangle."<<endl;
    } else if (s1==s2 || s1==s3 || s2==s3){
        cout<< "It's an Isoceles Triangle."<<endl;
    } else {
        cout<<"It is an Scalene Triangle."<<endl;
    }

}