#include <iostream>
using namespace std;
int main(){
    int a , b;
    int registro = 1;    
    while (cin>>a>>b && a > 0 && b > 0)
    {
        if(registro>1) cout<<endl;
        char c[a][b];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin>>c[i][j];
            }
        }
        cout<<"Field #"<<registro++<<":"<<endl;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if(c[i][j]=='*') cout<<"*";
                else{
                    int flag = 0;
                    for (int z   = i-1; z <= i+1; z++)
                    {
                        for (int w = j-1; w <= j+1; w++)
                        {
                            if(c[z][w]=='*' && z>=0 && w>=0 &&z<a && w<b)flag++;
                        }                  
                    }
                    cout<<flag;                    
                }
            }
            cout<<endl;            
        }
    }
    return 0;
}