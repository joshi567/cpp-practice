#include<iostream>
using namespace std;
 int division(int a,int b){
    return a/b;
}
 int jo(int a,int b){
    return a%b;
}
 int cross(int a,int b){
    return a*b;
}
 int cube(int a){
    return a*a;
}
int main(){
    int a,b;
    cout<<"enter the value of a:  \n";
    cin>>a;
    cout<<"enter the value of b:  \n";
    cin>>b;
    cout<<"enter the value of a/b :"<<division(a,b)<<" \n";
        cout<<"enter the value of a%b :"<<jo(a,b)<<" \n";
    cout<<"enter the value of a*b :"<<cross(a,b)<<" \n";
    cout<<"enter the value of a*a :"<<cube(a)<<" \n";

    return 0;
}