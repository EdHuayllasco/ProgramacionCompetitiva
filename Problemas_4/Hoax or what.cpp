#include <iostream>
#include <set>

using namespace std;

int main(){
    int n; 
    while (cin>>n && n !=0){
        multiset<int> numbers;
        long long cost = 0;
        for (int i=0; i<n; i++){
            int k;
            cin>>k;
            for (int j=0; j<k; j++){
                int bill;
                cin>>bill;
                numbers.insert(bill);
            }
            auto lowest = numbers.begin();
            auto highest = --numbers.end();
            cost += *highest - *lowest;
            numbers.erase(lowest); 
            numbers.erase(highest);
        }
        cout<<cost<<endl;
    }
}