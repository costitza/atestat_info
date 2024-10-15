#include <iostream>
#include <fstream>
#include <cstring>

/*
 * 34.	Se citeşte din fișierul “text.in” un şir cu maxim 255 de caractere, format doar din
 * litere mici şi spaţii. Se consideră cuvânt orice secvenţă formată doar din litere adiacente.
 * Cuvintele sunt separate prin exact un spaţiu. Să se afișeze cuvintele palindrom din text. Dacă nu
 * există cuvinte palindrom atunci se va afișa mesajul “NU EXISTĂ”.
 * */

using namespace std;

ifstream in("text.in");

char c[256];

int palindrom(char x[]){
    int l=strlen(x);
    for(int st=0,dr=l-1; st<dr; st++,dr--)
        if(x[st]!=x[dr])
            return 0;
    return 1;
}

int main()
{
    int ok=0;
    in.getline(c,256);
    for(char* t=strtok(c," "); t; t=strtok(NULL," "))
        if(palindrom(t)){
            cout<<t<<" ";
            ok=1;
        }
    if(ok==0)
        cout<<"NU EXISTA";
    return 0;
}