#include<iostream>
using namespace std;
int main(){
    int marks[] = {0,1,2,3};
    int*p = marks;
    cout<<*(p++)<<"\n";
    cout<<*(++p)<<"\n";
    cout<<"the value of marks[] is"<<*p<<"\n";
    cout<<"the value of marks[] is"<<*(p+1)<<"\n";
    cout<<"the value of marks[] is"<<*(p+2)<<"\n";
    cout<<"the value of marks[] is"<<*(p+3)<<"\n";
}