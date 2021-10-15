#include <iostream>
#include <stack>
using namespace std;

stack<char> expresion;

bool operadores(char op1, char op2) {
  return (op1 == '*' || op1 == '/') >= (op2 == '*' || op2 == '/');
}
void comprobar(char input){
    if (input == '+' || input == '-' || input == '*' || input == '/') {
        if (expresion.empty()) 
            expresion.push(input);
        else {
            while (!expresion.empty() && expresion.top() != '(') {
                if (operadores(expresion.top(), input)) {
                    cout << expresion.top();
                    expresion.pop();
                } 
                else
                    break;
            }
            expresion.push(input);
        }
    } 
    else if (input == '(') 
        expresion.push(input);
    else if (input == ')') {
        while (expresion.top() != '(') {
            cout<<expresion.top();
            expresion.pop();
        }
        expresion.pop();
    } 
    else
        cout<<input;
}

int main(void) {
  int cases;
  char input;
  cin>>cases;
  cin.ignore();
  while (cases--) {
    cin.ignore();
    while (cin.peek() != '\n' && cin.peek() != -1) {
        cin >> input;
        cin.ignore();
        comprobar(input);
    }
    while (!expresion.empty()) {
      cout << expresion.top();
      expresion.pop();
    }
    cout << endl;
    if (cases)
        cout << endl;
  }
}