#include <iostream>
using namespace std;
int func(int a,int b)
{
    cout<<a+b<<endl;
}

int func(int a,int b,int c)
{
    cout<<a+b+c<<endl;
}

int func(int a,int b,int c,int d)
{
    cout<<a+b+c+d<<endl;
}

int main()
{

    func(1,2);
    func(1,2,3);
    func(1,2,3,4);

}