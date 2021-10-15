#include <iostream>
using namespace std;

void Beiju(string text){
    for (int i = text.length() - 1; i >= 0; --i){
        if (text[i] == '['){
            for (int j = i + 1; text[j] != ']' && text[j] != '[' && j < text.length(); ++j)
                putchar(text[j]);
        }
    }
    for (int i = 0; text[i] != '[' && text[i] != ']' && i < text.length(); ++i)
        putchar(text[i]);
    for (int i = 0; i < text.length(); ++i){
        if (text[i] == ']'){
            for (i = i + 1; text[i] != '[' && i < text.length(); ++i){
                if (text[i] != ']') 
                    putchar(text[i]);
            }   
        }
    }
    puts("");
}

int main() {
    string text;
    while (cin>>text && getchar() != EOF)
        Beiju(text);    
    return 0;
}