#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    
  string x, ultimox, str;
  int n, temp;
  while( cin>>x){
    if( x == "END" ) return 0;
    n = 0;
    do{
      n++;
      ultimox = x;
      temp = x.length();
      x = "";
      while( temp ){
          // sumar 48 al resto y nuevamente volverlo char
        str = (char)((temp%10)+(int)'0');
        str += x;
        x = str;
        temp /= 10;
      }
    }while( ultimox != x );
    cout<<n<<endl;
  }
  
}