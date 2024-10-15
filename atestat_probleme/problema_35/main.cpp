#include <iostream>
#include <fstream>
#include <cstring>

/*
 * 35.	Se citeşte din fișierul “text.in”  un şir cu maxim 255 de caractere,
 * format doar din litere mici şi spaţii. Se consideră cuvânt orice secvenţă formată doar din
 * litere adiacente. Cuvintele sunt separate prin exact un spaţiu. Să se afișeze în fișierul “rime.out”
 * toate perechile de cuvinte care rimează. Două cuvinte rimează dacă au ultimele două litere identice.
 * */

using namespace std;

ifstream in("text.in");
ofstream out("rime.out");

int n;

struct cuv
{
    char cuvant[256];
    char l1,l2;
} c[256];

char aux[256];

void citire()
{
    in.getline(aux,256);
    for(char* t= strtok(aux," "); t; t=strtok(NULL," "))
    {
        int lg=strlen(t);
        if(lg==1)
            continue;
        strcpy(c[n].cuvant, t);
        c[n].l1=t[lg-2];
        c[n].l2=t[lg-1];
        n++;
    }
}

void afisare(){
    for(int i=0;i<n-1;i++)
        for(int j=i+1; j<n; j++)
        {
            if(c[i].l1==c[j].l1 && c[i].l2==c[j].l2)
                out<<c[i].cuvant<<" "<<c[j].cuvant<<endl;

        }
}
int main()
{
    citire();
    afisare();
    return 0;
}