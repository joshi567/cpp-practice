#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float r,A;
    int p,t;

     cout<<"principle(p) value:  \n";
     cin>>p;

     cout<<"rate of interest(r) value:  \n";
     cin>>r;

     cout<<"time(t) (in years):  \n";
     cin>>t;

     A = p*(pow(1+r/100,t));
     cout<<"A value: "<<A <<"\n";

     cout<<"compound interest(ci):"<<(A-p)<<"\n";

    return 0;
}