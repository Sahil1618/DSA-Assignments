#include <iostream>
#include <string>
using namespace std;
int main(){
    string str = "Pbwcshkuiglhlds";
    int len = str.length();
    for(int i=0;i<str.length();i++){
        if(i%2==1) str[i]='#';
    }
    cout<<str;
}