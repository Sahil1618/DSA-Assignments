#include <iostream>
using namespace std;

bool isConsonant(char ch){
    if(ch<65) return false;
    else if(ch>90 && ch<97) return false;
    else if(ch>122) return false;
    else if(ch=='a'|| ch=='A') return false;
    else if(ch=='e'|| ch=='E') return false;
    else if(ch=='i'|| ch=='I') return false;
    else if(ch=='o'|| ch=='O') return false;
    else if(ch=='u'|| ch=='U') return false;
    else return true;
}
int main(){
    cout<<"Enter a string : ";
    string s;
    getline(cin,s);
    int count = 0 ; // number of consonants
    for(int i=0;i<s.length();i++){
        if(isConsonant(s[i])) count++;
    }
    cout<<count<<endl;
}