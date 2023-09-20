// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout <<"Enter "
// }


#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter total amount :  ";
    cin>>x;

    switch(x>=2000)
    {
        case 1:
        cout<<"minimum number of 2000 notes = "<<(x/2000)<<endl;
        x= x - (x/2000)*2000;
    }

    switch(x>=500)
    {
        case 1:
        cout<<"minimum number of 500 notes = "<<(x/500)<<endl;
        x-=(x/500)*500;
    }

    switch(x>=200)
    {
        case 1:
        cout<<"minimum number of 200 notes = "<<(x/200)<<endl;
        x-=(x/200)*200;
    }

    switch(x>=100)
    {
        case 1:
        cout<<"minimum number of 100 notes = "<<(x/100)<<endl;
        x-=(x/100)*100;
    }

    switch(x>=50)
    {
        case 1:
        cout<<"minimum number of 50 notes = "<<(x/50)<<endl;
        x-=(x/50)*50;
    }

    switch(x>=20)
    {
        case 1:
        cout<<"minimum number of 20 notes = "<<(x/20)<<endl;
        x-=(x/20)*20;
    }

    switch(x>=10)
    {
        case 1:
        cout<<"minimum number of 10 notes = "<<(x/10)<<endl;
        x-=(x/10)*10;
    }
    switch(x>=5)
    {
        case 1:
        cout<<"minimum number of 5 notes = "<<(x/5)<<endl;
        x-=(x/5)*5;
    }

    switch(x>=2)
    {
        case 1:
        cout<<"minimum number of 2 coins = "<<(x/2)<<endl;
        x-=(x/2)*2;
    }

    switch(x>=1)
    {
        case 1:
        cout<<"minimum number of 1 coins = "<<(x/1)<<endl;
        x-=(x/1)*1;
    }
}