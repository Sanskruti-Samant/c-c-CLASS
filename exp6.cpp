//exp6 SANSKRUTI SAMANT
#include<iostream>
using namespace std;
const float pi=3.14;
class allarea{
    private:float ar1,ar2,ar3;
    public:
        float area(float n,float b,float h)
        {
            ar1=n*b*h;                           //area of triangle
        }
        float area(float r)
        {
            ar2=pi*r*r;                         //area of circle
        }
        float area(float lr,float br)
        {
            ar3=lr*br;                          // area of rectangle
        }
       void display()
       {
           cout<<"\nArea of triangle:"<<ar1<<endl;
           cout<<"\nArea of circle:"<<ar2<<endl;
           cout<<"\nArea of rectangle:"<<ar3<<endl;
       }
};

int main()
{
    float b,h,r,lr,br;
    allarea a;

    cout<<"\nenter the base & height of traingle:\n";      //base and height asked

    cin>>b>>h;
    a.area(0.5,b,h);                                        
     cout<<"\nenter radius of circle:\n";                 //radius asked

    cin>>r;
    a.area(r);

     cout<<"\nenter the length and breath of rectangle:\n";   //length and breath asked

    cin>>lr>>br;
    a.area(lr,br);

    a.display();
    return 0;

}
