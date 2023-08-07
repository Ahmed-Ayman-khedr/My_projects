#include<iostream>
using namespace std;
struct employee {
        string name , email ;
        string pass1 , pass2;
    void print () {
        cout<<"Your name is "<<name<<endl;
        cout<<"Your email is "<<email<<endl;
        cout<<"Your password is "<<pass1<<endl;
    }
};
int main () {
    employee e1;
        cout<<"Please enter your name :\n";
        cin>>e1.name;
        cout<<"Please enter your email :\n";
        cin>>e1.email;
        cout<<"Please enter your password :\n";
        cin>>e1.pass1;
        cout<<"Please reneter your password :\n";
        cin>>e1.pass2;
        while ( e1.pass1 != e1.pass2 ) {
                cout<<"Please reneter your password :\n";
                cin>>e1.pass1;
                cout<<"Please reneter your password :\n";
                cin>>e1.pass2;
            }
        cout<<"Welcome to ZAPC company.\n";
        e1.print();
        cout<<"How can I help you ?";
    return 0;
}