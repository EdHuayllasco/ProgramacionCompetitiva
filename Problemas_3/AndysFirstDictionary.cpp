#include<iostream>
#include<set>
#include<sstream>
using namespace std;
void CheckLetter(string &word){
    for (int i = 0; i < word.length(); i++){
        if (isalpha(word[i]))
            word[i] = tolower(word[i]);
        else
            word[i]=' ';
    }
}
void Dictionary(set<string>text){
    for (auto iptr = text.begin(); iptr != text.end(); iptr++)
        cout << *iptr << endl;
}

int main() {
    set<string> texto;
    string word,temp;
    while(cin >> word) {
        CheckLetter(word);
        stringstream temp2(word);
        while(temp2 >> temp) 
            texto.insert(temp);
    }
    Dictionary(texto);
    return 0;
}