#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int inicio, clave1, clave2,clave3;
    while (cin>>inicio>>clave1>>clave2>>clave3)
    {
        cout<<1080+(((inicio-clave1+40)%40+(clave2-clave1+40)%40+(clave2-clave3+40)%40)*9);
        cout<<endl;
    }
    return 0;
}