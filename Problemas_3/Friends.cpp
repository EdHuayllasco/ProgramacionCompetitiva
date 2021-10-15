#include <iostream>
using namespace std;

void crear(int **&M, int F, int C){
    M = new int *[F];
    for(int i=0 ; i < F ; i++)
        *(M+i)= new int [C];
}
void llenar(int **M, int F, int C){
    for(int i=0 ; i < F ; i++){
        for(int j=0 ; j < C ; j++)
            *(*(M+i)+j) = 0;
    }
}
void Amigos(int **Ma, int N, int M){
    int A,B;
    for (int i = 0; i < M; i++){
        cin>>A>>B;
        for (int j = 0; j < N; j++){
            Ma[A-1][B-1] = 1;
            Ma[B-1][A-1] = 1;
            for (int k = 0; k < N; k++){
                if(Ma[A-1][k]==1)
                    Ma[B-1][k] = Ma[A-1][k];
                if(Ma[B-1][k]==1)
                    Ma[A-1][k] = Ma[B-1][k];
            }
            if(Ma[A-1][j]==1)
                Ma[B-1][j] = Ma[A-1][j];
            if(Ma[B-1][j]==1)
                Ma[A-1][j] = Ma[B-1][j];            
        }
    }
}
int LargestGroup(int **M, int N){
    int largest = 0;
    for (int i = 0; i < N; i++){
        int temp = 0;
        for (int j = 0; i < N; i++)
            temp += M[i][j];
        if(largest<temp) largest = temp;        
    }
    return largest;
    
}
 
int main(){
    int cases, N, M, Lgroup;
    cin>>cases;
    for (int i = 0; i < cases; i++){
        cin>>N>>M;
        int **matrix;
        crear(matrix,N,N);
        llenar(matrix,N,N);
        Amigos(matrix,N,M);
        cout<<LargestGroup(matrix,N)<<endl;   
    }
}