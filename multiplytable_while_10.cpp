#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"the number is:  "<<"\n";
    cin>>a;
    cout<< "the multiplication table of the number is: " ;

    int i=0;
     while (i<=10){
       
        cout<<(a*i)<<"\n";
        i++;
     }
    return 0;
} 