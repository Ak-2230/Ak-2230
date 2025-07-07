#include <iostream>
using namespace std;
class num
{
    public:
            num(int a,int b)
            {
                cout<<"The value a is: "<<a<<endl;
                cout<<"The value b is: "<<b<<endl;
            }
};


int main()
{
    num obj(1,2);
}