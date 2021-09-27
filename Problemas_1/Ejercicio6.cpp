#include <iostream>
using namespace std;
int main(){
    int a,b,aux; 
    cin>>a;
    while (a--)
    {
        cin>>b;
        int min = 999;
        int max = -999;
        for (int i = 0; i < b; i++)
        {
            cin>>aux;
            if(aux<min) min = aux;
            if(aux>max) max = aux ;
        }
        cout<< 2*(max-min)<<endl;
    }
    return 0;
} 