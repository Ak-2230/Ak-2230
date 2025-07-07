#include <iostream>
using namespace std;
class num
{
    int a=12;
        public:
            num()
            {
                cout<<"This is the constructor: "<<a<<endl;
            }
};
int main()
{
    num obj;
     
    return 0;
}