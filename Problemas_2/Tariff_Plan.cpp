#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    for (int i = 1; i <= a; i++)    
    {
        cin>>b;
        int resultM = 0;
        int resultJ = 0;
        while (b--)
        {
            cin>>c;
            resultM += (c/30)*10+10;
            resultJ += (c/60)*15+15;
        }
        cout<<"Case "<<i<<": ";
        if(resultM < resultJ) cout<< "Mile "<<resultM<<endl;
        else if (resultM == resultJ) cout<<"Mile Juice "<<resultM<<endl;
        else cout<<"Juice "<<resultJ<<endl;        
    }
    
    return 0;
}