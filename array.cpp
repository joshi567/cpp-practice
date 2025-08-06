#include<iostream>
using namespace std;

int main(){
    int array1[5];
    cout<<"enter 5 numbers in array1: \n";
    for(int i=0; i<5; i++){
      cin>>array1[i];
    }

    int array2[7];
    cout<<"enter 7 numbers in array2: \n";
    for(int i=0; i<7; i++){
      cin>>array2[i];
    }
    
    for(int i=0;i<5;i++){
     if (array1[i]!=array2[i])
     {
        cout<<"array1 and array2 are not equal \n";
        exit(0);
     }
   }
   cout<<"equal upto first 5\n";
return 0;
}