#include <iostream>
using namespace std;
int suma_digitos(int b){
    if(b/10 == 0) return b;
    else{
        int sumatoria = 0;
        while (b>0)
        {
            sumatoria += b%10;
            b = b/10;
        }
        return suma_digitos(sumatoria);
    }
}
int main(){
    int b;
    cin>>b;
    while (b!=0)
    {
        cout<<suma_digitos(b)<<endl;
        cin>>b;
    }    
    return 0;
}