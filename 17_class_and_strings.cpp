#include <iostream>
// #include <string> //this may/may not be but code runs
using namespace std;

class binary
{
private:
    string s;
    void chk_bin();
public:
 void read();
 void ones_compliment();
 void display();
};


 void binary:: read()
{ 
    cout<<"enter binary number: \n";
    cin>>s;
    chk_bin();
}


 void binary:: chk_bin()
{
   for (int i=0;i<s.length();i++)
   {
      if( (s.at(i))!='0' && s.at(i)!='1')       //sr
      {  
        cout<<"incorrect binary format \n";
        exit(0);
      }  
   }   
}


 void binary:: ones_compliment()
{
   for (int i = 0; i < s.length(); i++)
   {
      if (s.at(i)=='0')
      {
         s.at(i)='1';
      }
      else
      {
        s.at(i)='0';
      }
   }
   cout<<"converted into ones_compliment\n";
}


 void binary:: display()
 {
    cout<<"displaying your binary number\n";
    for (int i = 0; i < s.length();i++)
    {
       cout<<s.at(i);
    }
    cout<<"\n";
 }
 

int main()
{
    binary b;
    b.read();
    // b.chk_bin();we cant use/call here as it is declared in private
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}