#include<iostream>
#include<cmath>
using namespace std;

int main(){
   int n;
   cout<<"enter the value of n: \n";
   cin>>n;
   int arr[n];
   cout<<"enter the value of n numbers: \n";
   for (int i= 0; i <  n; i++)
   {
    cin>>arr[i];
   } 
   int sum=0;//counting start from 0
   for(int i=0; i<n; i++)
   {
    sum +=arr[i];

    /*sum += arr[i] mean add arr[i] to whatever is already in sum 
    first sum +=arr[0],,0+arr[0]
    second sum +=arr[1],,0+arr[0]+arr[1]*/
   
    /*sum = arr[i] mean forget whatever is in sum,,just put arr in it
    first sum=arr[0]
    second sum=arr[1],,now sum is for 2nd num not for both total,,forget old num */
   }
  long double avg = sum/n;
  cout<<"avg of numbers in arr is: "<<avg<<"\n";
    return 0;
}

/*int sum=0 yy??
we are telling to comp i want a variable sum which store int but not provided starting point ,
initialize as sum has a garbage value output incorrect
*/