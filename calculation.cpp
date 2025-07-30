#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"the values of x and y:  \n";
    cin>>x>>y;
    
    char op;
    cout<<"enter the op symbol:   \n";
    cin>>op; 
    
    if(op=='+'){
        cout<<x+y<<"\n";
    }
    else if(op=='-'){
        cout<<x-y<<"\n";
    } 
    else if(op=='/'){
        cout<<x/y<<"\n";
    }
    else if(op=='*'){
        cout<<x*y<<"\n";
    }
    return 0;
}
