#include <iostream>
using namespace std;
int main(){
    int n,b,h,w;    
    int costo_per;
    while (cin>>n>>b>>h>>w)
    {
        bool flag = false;
        int minimo_viaje=0;
        int minimo = b+1;
        while (h--)
        {                     
            cin>>costo_per;
            for (int i = 0; i < w; i++)                
            {
                    int aux;
                    cin>>aux;
                    if(aux >= n && costo_per*n<minimo) {flag = true; minimo_viaje = costo_per*n;}
            }                
        }
        if(flag == true) cout<<minimo_viaje<<endl;
        else cout<<"stay home"<<endl;
    }    

    return 0;
}