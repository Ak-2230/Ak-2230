#include <iostream>
using namespace std;
class simple
{
    int a;
    int b;
    int c;

    public:
        simple (int a1=1, int b1=1, int c1=1)
        {
            a=a1;
            b=b1;
            c=c1;
        }
        int printdata()
        {
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
        }
};
int main()
{
    simple obj(2,2,2);
    obj.printdata();
    

    simple obj1;
    obj1.printdata();

}