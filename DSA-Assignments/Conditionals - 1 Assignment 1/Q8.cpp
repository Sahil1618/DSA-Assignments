// Ques : Given three points (x1, y1), (x2, y2) and 
// (x3, y3), write a program to check if all the three 
// points fall on one straight line.

#include <iostream>
using namespace std;
int main (){
    int x1 , x2 , y1, y2, x3, y3 ;
    cout <<"Enter (x1, y1) (x2,y2) and (x3, y3) in same manner as mentioned using spaces :"<<endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    float slope1 = (float)(y2 - y1) / (x2 - x1);
    float slope2 = (float)(y3 - y2) / (x3 - x2);

    if (slope1 == slope2){
        cout << "All 3 points fall on one straight line." <<endl;
    } else {
        cout << "The three points are not collinear." << endl;
    }
}