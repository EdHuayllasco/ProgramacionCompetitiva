#include <iostream>
using namespace std;
int main(){
    int a;
    
    string cadena;
    cin>>a;

    while (a--)
    {
        cin>>cadena;
        int b=0;
        int suma = 0;
        for (int i = 0; i < cadena.size(); i++)
        {
            if(cadena[i] == 'O'){
                b++;
                suma +=b;
            }
            else if(cadena[i]=='X'){
                b=0;
            }
        }
        cout<<suma<<endl;
    }
    
    return 0;
}