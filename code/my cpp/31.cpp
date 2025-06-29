// Ex 1
#include <iostream>
using namespace std;
class num
{
    int a;
    int b;
    public:
        num()
        {
            a=0;
            b=0;
        }

        num(int x)
        {
            a=x;
            b=0;
        }

        num(int x1,int y1)
        {
            a=x1;
            b=y1;
        }

        int printer()
        {
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
        }
};
int main()
{
    num obj;
    obj.printer();

    num obj1(1);
    obj1.printer();

    num obj2(12,2);
    obj2.printer();
}