#include <iostream>
using namespace std;
class num
{
    private:
        int a;
        int b;
    public:
        void giver(int a1,int b1);
        void printer()
        {
            cout<<a<<endl;
            cout<<b<<endl;
        }
};

void num :: giver(int a1,int b1)
{
    a=a1;
    b=b1;
}
int main()
{
    num obj;
    obj.giver(12,2);
    obj.printer();

}