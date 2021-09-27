#include <iostream>
#include <string>
using namespace std;
int main(){
    char letra;
    int bandera = 0; 
    while (cin.get(letra))
    {
        if(letra == '"'){
            if(bandera == 0) {
                bandera = 1;
                cout<<"``";}
            else {
                bandera = 0;
                cout<<"''";
            }
        } 
        else cout<<letra;       
    }
    
    return 0;
}