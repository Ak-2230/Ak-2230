// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[3]={1,2,3};

//     cout<<a[0]<<endl;
//     cout<<a[1]<<endl;
//     cout<<a[2]<<endl;
    
//     a[0]=11;
//     a[1]=12;
//     a[2]=100;

//     cout<<a[0]<<endl;
//     cout<<a[1]<<endl;
//     cout<<a[2]<<endl;
    

// }


#include <iostream>
using namespace std;
int main()
{
    int marks[3]={1,2,3};
    int*pointe=marks;

    cout<<*pointe<<endl;
    cout<<*pointe+1<<endl;
    cout<<*pointe+2<<endl;
    
}