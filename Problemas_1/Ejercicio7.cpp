#include <iostream>
using namespace std;
int main(){
    int a, m, n,x,y;
    cin>>a;    
    while (a!=0)
    {
        cin>>m>>n;
        while (a--)
        {
            cin>>x>>y;
            if(x>m && y>n) cout<<"NE";
            else if(x==m || y ==n) cout<<"divisa";
            else if(x<m && y>n) cout<<"NO";
            else if(x>m && y<n) cout<<"SE";
            else cout<<"SO";
            cout<<endl;
        }
        cin>>a;
    } 
    return 0;
}