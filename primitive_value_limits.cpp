#include<iostream>
#include<limits>//when to have max_size as default computer value
using namespace std;
int children,dobyear,salarypermonth,balancesalaryperyear,salaryperyear;
bool married;
char gender;
float height,GPA;

int max_int=numeric_limits<int>::max(); 
float max_float=numeric_limits<float>::max();

int main() {
cout<<"enter the value of number of children: \n";
cin>> children;
cout<<"enter the value of dobyear: \n";
cin>>dobyear;
cout<<"enter the value of salarypermonth: \n";
cin>>salarypermonth;
cout<<"enter the value of balancesalaryperyear: \n";
cin>>balancesalaryperyear;
cout<<"enter the value of salaryperyear: \n";
cin>>salaryperyear;
cout<<"enter the gender: \n";
cin>>gender;
cout<<"enter whether married or not [1/0]: \n";
cin>>married;
cout<<"enter height and GPA: \n";
cin>>height>>GPA;

if( children<=max_int){
   cout<< "number of childrens is in its primitive value limit \n";}
else{cout<<"it's beyond the primitive value limit \n";}

if( dobyear<= max_int){
   cout<< "the dobyear is in its primitive value limit \n";}
else{cout<<"it's beyond the primitive value limit \n";}

if( salarypermonth<= max_int){
    cout<< "the salary per month is in its primitive value limit \n";}
else{cout<<"it's beyond the primitive value limit \n";}

 if( balancesalaryperyear<= max_int){
    cout<< "the balance salary per year is in its primitive value limit \n";}
else{cout<<"it's beyond the primitive value limit \n";}

 if(  salaryperyear<= max_int){
    cout<< "the salary per year is in its primitive value limit \n";}
else{cout<<"it's beyond the primitive value limit \n";}

if( height<= max_float){
    cout<< "the height is in its primitive value limit \n";}
else{cout<<"it's beyond the primitive value limit \n";}

if( GPA<= max_float){
    cout<< "the GPA is in its primitive value limit \n";}
else{cout<<"it's beyond the primitive value limit \n";}

    return 0;
}