/*
                        copy constructor
->here we make default constructor so that if we don't pass argument to the obj 
so it can't give us the error 
-> because it's take the default constructor
*/

// Ex 1

// #include <iostream>
// using namespace std;
// class number
// {
//     public:
//         int a;
//         int b;
//         public:
//         number(){};//Default constructor

//         number (number &obj)
//         {
//             cout<<"copy constructor"<<endl;
//             a=obj.a;
//             b=obj.b;
//         }

//         void display()
//         {
//             cout<<"The value of a is: "<<a<<endl;
//             cout<<"The value of b is: "<<b<<endl;
//         }

// };
// int main()
// {
//     number obj1,obj3;
//     obj1.a=12;
//     obj1.b=100;


//     number obj2(obj1);//copy constructor will run
//     obj2.display();

//     obj3=obj1;//copy construstor will not run
    
//     number obj4=obj1;//copy construstor will not run
//     obj4.display();
// }




// Ex 2

// #include <iostream>
// using namespace std;
// class num
// {
//     public:
//         int a;
//         int b;
//     public:
//         num(){}
//         int disply()
//         {
//             cout<<"The value of a is: "<<a<<endl;
//             cout<<"The value of b is: "<<b<<endl;
//         }
// };
// int main()
// {
//     num obj1;
//     obj1.a=12;
//     obj1.b=12;

//     num obj2(obj1);
//     obj2.disply();
// }