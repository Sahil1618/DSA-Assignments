
// Ques : Given a point (x, y), write a program to find out if it lies on the x-axis,
// y-axis or at the origin, viz. (0, 0). 


#include<iostream>
using namespace std;
int main () {
    int x,y ;
    cout << "Enter value of x coordinate : "<<endl;
    cin >> x;
    cout << "Enter value of y coordinate : "<<endl;
    cin >> y;

    if ((x > 0 && y == 0)|| (x < 0 && y == 0)){
        cout <<"Point lies on X coordinate."<<endl;
    } else if ((y > 0 && x == 0)|| (y < 0 && x == 0)){
        cout <<"Point lies on Y coordinate. "<<endl;
    } else if (x == 0 && y == 0) {
        cout<<"Point lies on the origin. "<<endl;
    } else {
        cout<< "Point lies in between both x and y axis." <<endl;
    }
}