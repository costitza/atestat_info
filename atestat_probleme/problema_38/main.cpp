#include <iostream>
#include <fstream>
#include <cstring>

/*
 * 38.	Se citeşte din fișierul “text.in” un şir cu maxim 255 de caractere, format doar din litere
 * (mici şi mari) şi spaţii. Se consideră cuvânt orice secvenţă formată doar din litere adiacente.
 * Cuvintele sunt separate prin exact un spaţiu. Să se afişeze cuvintele şirului dat, în ordinea crescătoare
 * a lungimilor lor, câte un cuvânt pe fiecare linie a ecranului.
 * */

using namespace std;

ifstream in("text.in");

struct cuvant{
    char c[250];
    int l;
}vec[100];
int n;

void citire(){
    char t[100];
    while(!in.eof()){
        in >> t;
        strcpy(vec[n].c, t);
        vec[n].l = strlen(vec[n].c);
        n++;
    }
}

void sortare(){
    for(int i = 0;i < n - 1;i++){
        for(int j = i + 1;j < n;j++){
            if(vec[i].l > vec[j].l){
                cuvant aux = vec[j];
                vec[j] = vec[i];
                vec[i] = aux;
            }
        }
    }
}

void afisare(){

    for(int i = 0;i < n;i++){
        cout << vec[i].c << '\n';
    }

}

int main() {
    citire();
    sortare();
    afisare();
    return 0;
}
