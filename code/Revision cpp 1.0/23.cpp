#include <iostream>
using namespace std;
class num
{
    int item_no[100];
    int item_id[100];
    int counter=0;

    public:
        int taker()
        {
            cout<<"Enter your item id here: ";
            cin>>item_id[counter];
            cout<<"Enter your item no here: ";
            cin>>item_no[counter];
            counter++;
        }
        int printer()
        {
            for(int i=0; i<counter; i++)
            {
                cout<<item_id[i]<<endl;
                cout<<item_no[i]<<endl;
            }
        }
};
int main()
{
    num obj;
    obj.taker();
    obj.taker();
    
}