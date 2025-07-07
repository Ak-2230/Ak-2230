#include <iostream>
using namespace std;
class num
{
    public: 
        num()
        {
            cout<<"This will execute 1"<<endl;
        }

        ~num()
        {
            cout<<"This will execute last"<<endl;
        }


};
int main()
{
  num obj;
}