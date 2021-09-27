#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    while (a--)
    {
        cin>>b>>c;
        if (b==c) cout<<"="<<endl;
        else if(b>c) cout<<">"<<endl;
        else cout<<"<"<<endl;
    }
    
    return 0;
}