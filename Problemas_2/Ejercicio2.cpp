#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    while (a--)
    {
        cin>>b;
        b = ((((b*63)+7492)*5)-498);
        b = b%100;
        if(b>0) b=b/10;
        else b = -1*b/10;
        cout<<b<<endl;
    }  

    return 0;
}