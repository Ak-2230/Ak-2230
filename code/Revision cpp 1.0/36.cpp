#include <iostream>
using namespace std;
class a
{
    protected:
    int a=12;

    public:
    int b=12;

    private:
    int c=12;
};

class b:public a
{
    public:
        int func()
        {
            cout<<a<<endl;
        }

};
class c:public a
{
    public:
        int func()
        {
            cout<<b<<endl;
        }

};

// class d:private a
// {
//     public:
//         int func()
//         {
//             cout<<c<<endl;
//         }

// };

int main()
{
    b obj;
    c obj1;
    obj.func();
    obj1.func();
     
    return 0;
}