#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
unordered_map<int,int> QToP;


void FirstPart(){
    int query,period;
    cin>>query>>period;
    QToP[query] = period;
    pq.push({period,query});

}
void SecondPart(){
    int K;
    cin>>K;
    for (int i = 0; i < K; i++){
        pair<int,int> top = pq.top(); 
        pq.pop();
        cout << top.second << endl;
        top.first += QToP[top.second];
        pq.push(top);
    }
}

int main(){
    string registro;    
    while(cin>>registro, registro != "#")
        FirstPart();        
    SecondPart();
    return 0;    
}
