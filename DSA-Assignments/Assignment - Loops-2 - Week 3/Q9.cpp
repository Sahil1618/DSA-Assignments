#include <iostream>
using namespace std;
int main(){
   
    for(int i=1;i<=500;i++){
         int x=0;
         int num = i;
        while(num>0){
            int y = num % 10; // Extracting the last digit
            x += y*y*y ;
            num /=10;
        }

        if(i==x){
            cout<<i<<endl;
        }

    }
}