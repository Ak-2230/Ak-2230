#include <iostream>
using namespace std;
int a=0;
class num
{
    
    public:
        num ()
        {
            a++;
            cout<<"This is the constructor of obj: "<<a<<endl;
        }

        ~num ()
        {
            cout<<"This is the Destructor of obj: "<<a<<endl;
            a--;
        }

};
int main()
{
    num obj1,obj2,obj3;

}