#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"the value of a(in year):  \n";
    cin>>a;

    if(a%4==0 && (a%100!=0 || a%400==0)){
        cout<<"a is leap year \n";
    }
    else{
        cout<<"a is non-leap year \n";
    }

    return 0;
}