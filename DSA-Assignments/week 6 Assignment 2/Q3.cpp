#include<iostream>
#include<vector>
using namespace std;
int main(){
    // 1st matrix input
    int m;
    cout<<"Enter rows of matrix : ";
    cin>>m;

    int n;
    cout<<"Enter cols of matrix : ";
    cin>>n;

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // wave print
    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }
    }   
}