#include <iostream>
using namespace std;
class sum
{
    public:
    
    ~sum()
    {
        cout<<"This is the Destructor"<<endl;
    }
    sum()
    {
        cout<<"This is the constructor"<<endl;
    }


};
int main()
{
    sum obj;
}