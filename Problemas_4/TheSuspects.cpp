#include <iostream>
#include <vector>
using namespace std;

vector<int> parent(30000);
vector<int> grade(30000);

void crear(int n) {
    grade.assign(n, 1);
    for (int i = 0; i < n; i++)
        parent[i] = i;
}

int encontrar(int element) {
    return (parent[element] == element) ? element : (parent[element] = encontrar(parent[element]));
}

void unir(int a, int b) {
    a = encontrar(a);
    b = encontrar(b);
    if (a != b) {
        if (grade[a] < grade[b])
            swap(a, b);
        parent[b] = a;
        grade[a] += grade[b];
    }
}
int main(void) {
    int n, m, student1, count, student2;
    while (cin>>n>>m) {
        if(n==0 && m==0)
            break;
        crear(n);
        for (int i = 0; i<m; i++) {
            cin>>count;
            if (count > 0) {
                cin>>student1;
                count--;
                while (count--) {
                    cin>>student2;
                    unir(student1, student2);
                }
            }
        }
        cout <<grade[encontrar(0)]<< endl;
    }
    return 0;
}