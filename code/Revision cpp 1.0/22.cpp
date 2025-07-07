#include <iostream>
using namespace std;
class num
{
    string a;
        public:
            int giver()
            {
                string num1;
                cout<<"Enter your string here: ";
                cin>>num1;
                a=num1;
            };
            int checker()
            {
                for(int i=0; i<a.length(); i++)
                {
                    if(a.at(i) !='0'&& a.at(i) !='1')
                    {
                        cout<<"Enter vaild binary"<<endl;
                    }
                    else{
                        cout<<"Binary is correst "<<endl;
                    }
                }
            }

};
int main()
{

    num obj;
    obj.giver();
    obj.checker(); 

}