#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter the values of a,b,c\n";
    cout<<"the value of a is:  \n";
    cin>>a;
    cout<<"the value of b is:  \n";
    cin>>b;
    cout<<"the value of c is:  \n";
    cin>>c;

    if(a>b && a>c){
       cout<<"a is largest number\n";
    }
    else if(b>a && b>c){
        cout<<"b is largest number\n";
    }
    else if(a==b && b==c){
        cout<<"all are equal\n";
    }
    else{
        cout<<"c is greatest number\n";
    }
           return 0;
    }
    
