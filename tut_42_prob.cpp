#include<iostream>
#include<cmath>
using namespace std;
class simplecal{
public:
  float a ,b;
  void set_number(float x , float y){
      a=x;
      b=y;
    }
  void get_value(){
    cout<<"sum of the numbers is: "<<a + b<<"\n";
    cout<<"difference of the numbers is: "<<a - b<<"\n";
    cout<<"multiplication of the numbers is: "<<a * b<<"\n";
    cout<<"division of the numbers is: "<<a / b<<"\n";
    }
};
class scientificcal{
    public:
    double p,q;
    void setdata(){
        cout<<"enter the value of p: \n";
        cin>>p;
        cout<<"enter the value of q: \n";
        cin>>q;
    }
    void getdata(){
        cout<<"squareroot of p and q are: "<<sqrt(p)<<","<<sqrt(q)<<"\n";
        cout<<"log of p and q are: "<<log(p)<<","<<log(q)<<"\n";
        cout<<"power of p to q is: "<<pow(p,q)<<"\n";
        cout<<"cos of p and q are: "<<cos(p)<<","<<cos(q)<<"\n";
    }
};
class hybridcal:public simplecal , public scientificcal{
    public:
     void display(float y , float z){
        double E=exp(y+z);
         cout<<"value of experssion is: "<<E<<"\n";
    }
};
int main(){
     simplecal s1;             
     s1.set_number(6,5);
     s1.get_value();
     
    scientificcal s2;
    s2.setdata();
    s2.getdata();

    hybridcal s;
    s.display(1,0);
    
  // hybridcal h;  
   // h.set_number(5,5);
   // h.get_value();
   // h.setdata();
   // h.getdata();
   // h.display(1,0);
    return 0;
 }