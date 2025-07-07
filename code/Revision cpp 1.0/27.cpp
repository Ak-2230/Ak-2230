// #include <iostream>
// using namespace std;
// class num1
// {
//     public:
//         int printer();
// };
// class num
// {
//     static int a;
//         public:
//             int func()
//             {
//                 cout<<"Enter your number here: ";
//                 cin>>a;
//             }
//             friend int num1 ::printer();
            
// };
// int num::a;
// int num1::printer()
// {
//     cout<<"This is the value of a: "<<num::a<<endl;
// }
// int main()
// {
//     num obj;
//     num1 obj1;
//     obj.func();
//     obj1.printer();
     
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class num1
// {
//     public:
//         int value_printer();
// };

// class num
// {
//     static int a;
//         public:
//             int func()
//             {
//                 cout<<"Enter your value here: ";
//                 cin>>a;
//             }
//             friend num1;
// };
// int num::a=1;

// int num1 ::value_printer()
// {
//     cout<<num::a<<endl;
// }
// int main()
// {
//     num obj;
//     num1 obj1;
//     obj.func();
//     obj1.value_printer();
     
//     return 0;
// }