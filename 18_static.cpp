#include <iostream>
using namespace std;
class student
{
    int id;
public:
    static int address;

    void setdata()
    {
       cout<<"enter id: \n";
       cin>>id;
       address++;//this should be written to get address as it is in static
    }
    void getdata()
    {
        cout<<"student id is "<<id<<"\n";
    }
    static void getaddress()
    {
         cout<<"this is student address"<<address<<"\n";

    }
};
 int student::address=0;


int main()
{
    student jas,him;
    // jas.id=9; as its private
    // him.id=0;

    jas.setdata();
    jas.getdata();
    student::getaddress();

    him.setdata();
    him.getdata();
    student::getaddress();//should write in this format to cout getaddress
    student::address;
  return 0;
}