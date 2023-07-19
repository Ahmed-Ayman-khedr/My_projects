#include <iostream>
using namespace std;
int main(){
    char x;
    char a='a', A='A', e='e', E='E', i='i', I='I', o='o', O='O', u='u', U='U';
    cout<<"please enter character:";
    cin>>x;
    if (x==a || x==A || x==e || x==E || x==i || x==I || x==o || x==O || x==u || x==U ) {
        cout<<x<<" is a voul.";
    }
    else {
        cout<<x<<" is a Consonant.";
    }
    return 0;
}