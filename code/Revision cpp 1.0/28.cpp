// #include <iostream>
// using namespace std;
// class x;
// class y
// {
//     int num;
//         public:
//             int func1(int value)
//             {
//                 num=value;
//             }

//             friend int summer(x,y);

// };
// class x
// {
//     int data;
//         public:
//             int func(int value)
//             {
//                 data=value;
//             }
//             friend int summer(x,y);
// };

// int summer(x o1,y o2)
// {
//     cout<<"The sum of data and num is: "<<o1.data+o2.num<<endl;
// }
// int main()
// {
//     x obj1;
//     y obj2;
//     obj1.func(3);     
//     obj2.func1(3);
    
//     summer(obj1,obj2);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class num;

// class num1 {
//     int a;
// public:
//     void assigner(int value) {
//         a = value;
//     }
//     void value_printer() {
//         cout << a << endl;
//     }
//     friend void swaper(num1&, num&);
// };

// class num 
// {
//     int a;
// public:
//     void assigner(int value) {
//         a = value;
//     }
//     void value_printer() {
//         cout << a << endl;
//     }
//     friend void swaper(num1&, num&);
// };

// void swaper(num1 &obj1, num &obj2) {
//     int temp = obj1.a;
//     obj1.a = obj2.a;
//     obj2.a = temp;
// }

// int main() {
//     num obj2;
//     num1 obj1;

//     obj1.assigner(2);
//     obj2.assigner(1);

//     cout << "Before swap:\n";
//     obj1.value_printer();
//     obj2.value_printer();

//     swaper(obj1, obj2);

//     cout << "After swap:\n";
//     obj1.value_printer();
//     obj2.value_printer();

// }