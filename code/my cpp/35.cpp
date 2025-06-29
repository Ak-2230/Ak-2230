/*
                        Destructors 
*/
#include <iostream>
using namespace std;
int a=0;
class num
{
    
    public:
        num()
        {
            a++;   
            cout<<"This constructor run for number: "<<a<<" obj"<<endl;
        }
        ~num()
        {
            cout<<"This is the Destructor run for number: "<<a<<" obj "<<endl;
            a--;
        }
};
int main()
{
    num obj;
    num obj1;
    num obj2;
}