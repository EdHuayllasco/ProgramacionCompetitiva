#include <iostream>
#include<stack>
using namespace std;

bool comprobar(string exp, stack <char> expresion){
    for(int i= 0 ; i<exp.length();i++){
        if ( exp[i]=='[' || exp[i]=='(' ){
            expresion.push(exp[i]);
        }
        else{
		    if(exp[i]==')'){
                if (expresion.empty() ||expresion.top() != '(' ){
                    cout<<"No"<<endl;
                    return false;
                }
                expresion.pop();
            }
            else if (exp[i]==']'){
				if (expresion.empty() || expresion.top() != '[' ){
                    cout<<"No"<<endl;
                    return false;
                }
                expresion.pop();
            }
		}
    }
    if(expresion.empty()){
        cout<<"Yes"<<endl;
        return true;
    }
    else{
        cout<<"No"<<endl;
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    getc(stdin);
    for (int i = 0; i < n; i++){
        stack <char> expresion;
        string A;
        getline(cin,A);
        comprobar(A,expresion);
    }
    return 0;
}