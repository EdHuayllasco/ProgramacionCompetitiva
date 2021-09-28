#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    char aux;
    cin>>a;
    while (a--)
    {
        cin>>aux>>b>>c;
        if(aux == 'r') cout<<b<<endl;
        else if(aux == 'k') cout<<b*c/2+((b*c)%2)<<endl;
        else if(aux == 'Q') cout<<b<<endl;
        else if(aux == 'K') cout<<((b+1)/2)*((c+1)/2)<<endl;
    }
    
    return 0;
}