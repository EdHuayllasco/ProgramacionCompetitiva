#include <iostream>
#include<stack>
using namespace std;

stack <int> station;
int N, a, temp;
int train[1000];

void vaciar(){
    while (!station.empty())
        station.pop();
}
bool comprobar(){
    temp = 1;
    for (int i = 0; i < N; i++){
        if (train[i] == temp)
          temp++;
        else if (train[i] < temp) {
            if (station.size() > 0) {
                if (station.top() == train[i]) 
                    station.pop();
            }
        } 
        else if (train[i] > temp) {
            while (train[i] != temp) {
                station.push(temp);
                temp++;
            }
            temp++;
        }
    }
    if (station.empty())
        return true;
    else
        return false; 
}

int main(){
    while (cin>>N && N!=0 ){
        while (cin>>train[0] && train[0]!=0) {
            vaciar();
            for (int i = 1; i < N; i++)
                cin>>train[i];
            if(comprobar())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;        
        }
        cout<<endl;
    }  
    return 0;
}