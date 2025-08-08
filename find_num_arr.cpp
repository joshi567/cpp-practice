#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter value of n: \n";cin>>n;
  int arr[5];
  cout<<"enter the numbers: \n";
  for(int i=0;i<5;i++)
  {
    cin>>arr[i];}
    // for  i = 0; i < count; i++)
    // {
        // /* code */
    // }
   if (arr[5]==n)
    { cout<<"your value exist in arr\n";}
    else
    {cout<<"value dosen't exist in arr\n";}
       return 0;
 }
