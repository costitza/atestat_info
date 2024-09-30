#include <bits/stdc++.h>

/*
 * 15.	Se citeşte un text din fişierul ”text.in”. Textul are mai multe linii şi mai multe cuvinte. Pe fiecare
 * linie cuvintele sunt despărţite prin câte un singur spaţiu sau prin semne de punctuaţie. Să se afişeze în fişierul
 * ”text.out”, pe linii consecutive, toate literele care apar în text, împreună cu frecvenţele lor de apariţie.
 * */

using namespace std;

ifstream in("text.in");
ofstream out("text.out");

int frecv[26];

void citire(char &c) {
    in >> c;
}

void calculare(){
    while(!in.eof()){
        char c;
        citire(c);
        if(isalpha(c)){
            frecv[tolower(c) - 'a']++;
        }
    }
}

void afisare(){
    for(int i = 0; i < 26; i++){
        if(frecv[i] != 0){
            out << (char)(i + 'A') << " - " << frecv[i] << '\n';
        }
    }
}

int main() {
    calculare();
    afisare();
    return 0;
}
