//addition two complex number SANSKRUTI SAMANT
#include<iostream>
using namespace std;              
class COMPLEX                    //declaring class real and imaginary numbers
{
 int re,im;
 public:
     void get()
     {
         cin>>re>>im;
     }

     void display()
     {
         cout<<re<<"+"<<im<<"i";
     }
   void add(COMPLEX c1,COMPLEX c2)
   {
       re=c1.re+c2.re;
       im=c1.im+c2.im;
   }
};//complex

int main()                               //main program
{
    COMPLEX c1,c2,c3;
    cout<<"\nenter 1st complex no. as real and imaginary part:";
    c1.get();
    cout<<"\nenter 2nd complex no. as real and imaginary part:";
    c2.get();
    cout<<"\n\n the 1st complex no is:";
    c1.display();                              //function call
    cout<<"\n\n the 2nd complex no is:";
    c2.display();                              //function call

    c3.add(c1,c2);
    cout<<"\n\n the resultant complex no is:";
    c3.display();                               //function call

    return 0;
}

