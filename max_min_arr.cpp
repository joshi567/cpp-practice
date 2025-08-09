#include<iostream>
using namespace std;

int main(){
 int n;
 cout<<"enter the value of n: \n";
 cin>>n;
 int mintln=INT32_MAX,maxtln=INT32_MIN;
 //what to find min value so we use intmaxwith bit32 as it has max possible value and when it runs any value is smaller it gets updated...
  
 cout<<mintln<<" "<<maxtln<<"\n";
 int arr[n];
 cout<<"enter the value of n numbers: \n";
 for (int i= 0; i <  n; i++)
 {
  cin>>arr[i];
  if(arr[i]>maxtln) maxtln = arr[i];
  if(arr[i]<mintln) mintln = arr[i];

} 
cout<<"min value in arr is: "<<mintln<<","
<<"max value in arr is: "<<maxtln<<"\n";
}