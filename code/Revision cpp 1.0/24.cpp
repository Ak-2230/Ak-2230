// #include <iostream>
// using namespace std;
// class num
// {
//     static int a;
//     public:
//         int caller()
//         {
//             cout<<a<<endl;
//             a++;
//         }
// };

// int num ::a=1;
// int main()
// {
//     num obj;
//     obj.caller();
//     obj.caller();
//     obj.caller();

// }

#include <iostream>
using namespace std;
class num
{
    static int a;
    public:
        static int func()
        {
            cout<<a<<endl;
            a++;
        }

};
int num :: a=1;
int main()
{
    num obj;
    obj.func();
    obj.func();
    obj.func();

}