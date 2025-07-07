// #include <iostream>
// using namespace std;
// class num
// {
//     int a;
//         public:
//             int id_taker()
//             {
//                 cout<<"Enter your value here: ";
//                 cin>>a;

//             }

//             int id_printer()
//             {
//                 cout<<"the you enter here: "<<a<<endl;
//             }
// };
// int main()
// {
//     num obj[2];
//     obj[0].id_taker();
//     obj[1].id_taker();

//     for(int i=0; i<2; i++)
//     {
//         obj[i].id_printer();
//     }
    
// }

#include <iostream>
using namespace std;
class num
{
    public:
        int a;
        int b;
        public:
            int func(num obj)
            {
                a=a+obj.a;
                b=b+obj.b;
            }

            int printer()
            {
                cout<<a<<endl;
                cout<<b<<endl;
            }

};
int main()
{
    num obj1;
    obj1.a=1;
    obj1.b=1;

    num obj2;
    obj2.a=1;
    obj2.b=1;
    obj2.func(obj1);

    obj2.printer();

     
    return 0;
}