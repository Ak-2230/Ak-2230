#include <iostream>
#include <fstream>
using namespace std;

ifstream file2("default_pass.txt");
ifstream file3("default_user.txt");
string username;
string password;
int func()
{
    getline(file2,password);
    getline(file3,username);
}

int i=0;
int checklogin(const string user,const string pass)
{

    i++;

    if(user==username && pass==password)
    {
        cout<<"-----------we found the user name:----------- "<<user<<endl;
        cout<<"-----------we foud the passwod name:----------- "<<pass<<endl;
        return 1;
    }
            
    else
    {
        cout<<"try no."<<i<<endl;
        return 0;   
    }

    
}

int only_check(const string user,const string pass)
{
    if(user==username)
    {
        cout<<"we found the only username: "<<user<<endl;
    }

    else if(pass==password)
    {
        cout<<"we found the only password: "<<password<<endl;
    }

}


int disctionaryattack()
{
    func();
    ifstream file("password.txt");
    ifstream file1("user.txt");
    string checkdpass;
    string checkeduser;
    
    if(file.is_open())
    {
        while(file)
        {
           getline(file,checkdpass);
           getline(file1,checkeduser);
           int value=checklogin(checkeduser,checkdpass);
            if(value==1)
            {
               break;
            }
           only_check(checkeduser,checkdpass);
        }
        char user_;
        cout<<"if passwod was not found then do you want to use Brutforce attack: "<<endl;
        cout<<"press y for yes"<<endl;
        cout<<"press n for no"<<endl;
        cin>>user_;

        if(user_=='y')
        {
            cout<<"wait here we are starting the Brutforce attack: "<<endl;
        }

        else
        {
            cout<<"ok now you can exit the cracking "<<endl;
        }
    }
    else
    {
        cout<<"The file is not open"<<endl;
    }
 
}

int main()
{
    disctionaryattack();
}
