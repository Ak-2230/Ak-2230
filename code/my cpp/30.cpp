/*
                      Parameterzied
                        and
                      default constructors
*/
// Ex 1

// #include <iostream>
// using namespace std;
// class num
// {
// private:
//     int a;
//     int b;

// public:
//     void printer()
//     {
//         cout << "The value of a is: " << a << endl;
//         cout << "The value of b is: " << b << endl;
//     }

//     num(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
// };
// int main()
// {
//     num obj(1, 2);
//     obj.printer();
// }

// Ex 2
//Quick Quiz

#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int a;
    int b;

    int c;
    int d;

    public:
        point(int x1,int y1,int x2,int y2)
        {
            a=x1;
            b=y1;

            c=x2;
            d=y2;


            int mins=c-a;
            int mins1=d-b;
            
            int plus=(mins*mins)+(mins1*mins1);
            int final=sqrt(plus);
            cout<<"The distance between ("<<a<<","<<b<<")"<<" and "<<"("<<a<<","<<b<<")"<<" is: "<<final<<endl;
        }

};

int main()
{
    int num;
    cout<<"Enter your number here: ";
    cin>>num;

    int num1;
    cout<<"Enter your number here: ";
    cin>>num1;
    
    int num2;
    cout<<"Enter your number here: ";
    cin>>num2;
    
    int num3;
    cout<<"Enter your number here: ";
    cin>>num3;

    point obj(num,num1,num2,num3);


}