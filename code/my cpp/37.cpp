/*
                        inheritance syntax
                                 &
                          visibility mode 

*/

#include <iostream>
using namespace std;
class Base 
{
public: int a;
protected: int b;
private:int c;
};

// ex 1 
// inheritade as public
class Derived : public Base 
{
    public:
        void display()
        {
            cout<<"This is the 1 derived "<<endl;
            a=12;
            cout<<a<<endl;
            b=100;
            cout<<b<<endl;
            // cout<<c<<<endl; this will throws an error
        }
};

// ex 2
// inheritade as protected
class Derived2:protected Base
{
    public:
        void display()
        {
             cout<<"This is the 2 derived "<<endl;
            a=14;
            cout<<a<<endl;
            b=101;
            cout<<b<<endl;
            // cout<<c<<endl; this will throws an error
        }

};

// ex 3
// inheritade as private
class Derived3:private Base
{
    public:
        void display()
        {
             cout<<"This is the 3 derived "<<endl;
            a=1010;
            cout<<a<<endl;
            b=10101010;
            cout<<b<<endl;
            // c=12;
        }
};
int main()
{
    Derived obj1;
    obj1.display();

    Derived2 obj2;
    obj2.display();

    Derived3 obj3;
    obj3.display();


}