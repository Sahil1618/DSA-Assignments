#include <iostream>
using namespace std;
int main(){
    float r , h ;
    float vol ;
    cout<<"Enter the radius of cylinder : " <<endl;
    cin >> r;
    cout<<"Enter the height of cylinder : " <<endl;
    cin >> h ;
    vol = 3.14*r*r*h;
    cout<<"Volume of cylinder is : "<<vol <<endl;
}