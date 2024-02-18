#include<iostream>
using namespace std;
int main(){
    // taking number of rows and columns of matrix from the user
    int n ;
    cout << "Enter the number of rows : ";
    cin >> n;
    int matrix[n][n];

    cout << "Enter the elements of matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    // printing the left diagonal of the matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j == n-1) || (i==j)){
                cout<< matrix[i][j]<<" ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}