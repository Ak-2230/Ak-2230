/*
                    Dynamic initialization 
                            of
                    objects using constructors

*/
//Ex 1

// #include <iostream>
// using namespace std;
// class num
// {
//     int age;
//     string name;

//     public:
//         num(int a1,string n1)
//         {
//             age=a1;
//             name=n1;
//         }

//         void display()
//         {
//             cout<<age<<endl;
//             cout<<name<<endl;
//         }
    
// };
// int main()
// {
//     int user;
//     cout<<"Enter your number here: ";
//     cin>>user;

//     string name;
//     cout<<"Enter your name here: ";
//     cin>>name;

//     num obj(user,name);
//     obj.display();
// }

// Ex 2
#include <iostream>
using namespace std;
class num
{
    float marks;

    public:
        num(int m1)
        {
            marks=m1;
           cout<<"marks "<<marks<<endl;
        }

        num(float m2)
        {
           marks=m2;
           cout<<"marks "<<marks<<endl;
        }

};

int main()
{
    int val1;
    cout<<"Enter int here: ";
    cin>>val1;

    float val2;
    cout<<"Enter float here: ";
    cin>>val2;

    num obj(val1);
    num obj1(val2);


}