#include <iostream>
using namespace std;

int Set[30001]; 
int Num[30001];   

void Amics_Inicial(int N)
{
    for (int i = 1; i <= N; ++i) {
        Set[i] = i;
        Num[i] = 1;
    }
}
int FindRoot(int x)
{
    if (x == Set[x])
        return x;
    Set[x] = FindRoot(Set[x]);
    return Set[x];
}
void Union(int x, int y)
{
    x = FindRoot(x);
    y = FindRoot(y);

    if (x != y) {
        Set[x] = y;
        Num[y] += Num[x];
    }
}
int Amigos_largo_max(int N)
{
    int Max = 0;
    for (int i = 1; i <= N; ++i)
        if (Num[i] > Max)
            Max = Num[i];
    return Max;
}

int main()
{
    int num_casos, N, M, A, B;
    cin>>num_casos;
    while (num_casos--) {
        cin>> N >> M;
        Amics_Inicial(N);
        while (M--) {
            cin>> A >> B;
            Union(A, B);
        }
        cout<<Amigos_largo_max(N)<<endl;
    }
}
