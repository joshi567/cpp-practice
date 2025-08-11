#include<iostream>
#include<algorithm>
using namespace std;

int main(){
   int arr[4];
   cout<<"enter any 4 numbers in arr: ";
   for (int i = 0; i <4; i++)
   {
    cin>>arr[i];
   }
   cout<<"\n";
   sort(arr,arr+4);//sort(begin(arr),end(arr));
    cout<<"the sorted arr is: ";
    for (int i = 0; i <4; i++)
   {
    cout<<arr[i]<<"\n";
   }
 return 0;
}