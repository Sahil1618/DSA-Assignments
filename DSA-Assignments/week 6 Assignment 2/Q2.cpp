    #include <iostream>
    using namespace std;
    int main() {
    int n;
    cout<<"Enter no. of rows in matrix: ";
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    // transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
                int temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
    }
    // rotating clockwise
    for(int j=0;j<n;j++){
        for(int i=0;i<n/2;i++){
            swap(a[i][j], a[n-i-1][j]);
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    }