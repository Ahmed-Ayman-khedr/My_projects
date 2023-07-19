#include<iostream>
using namespace std;
int main(){
    int n, i=1;
    int f=1;
    cout<<"Please enter a number: ";
    cin>>n;
    while( i<=n ){
        f=f*i;
        i++;
    }
    cout<<"The factorial of "<<n<<" is equal to "<<f;
    return 0;
}