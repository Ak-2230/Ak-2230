#include <iostream>
using namespace std;
class num
{
    static int a;
        friend int func();
};

int num::a=1;

int func()
{
    cout<<num::a<<endl;
    num ::a++;
}

int main()
{
    func();
    func();
    func();
     
    return 0;
}