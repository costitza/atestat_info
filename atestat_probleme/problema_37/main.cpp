#include <iostream>
#include <fstream>
#include <cstring>

/*
 * 37.	Se citeşte din fișierul “text.in” un şir cu maxim 255 de caractere, format
 * doar din litere (mici şi mari) şi spaţii. Se consideră cuvânt orice secvenţă formată
 * doar din litere adiacente. Cuvintele sunt separate prin exact un spaţiu. Să se afişeze
 * cuvintele şirului dat, în ordine alfabetică.
 * */

using namespace std;

ifstream fin("text.in");

int n;

struct cuvant
{
    char c[260];
}v[150];

void citire()
{
    char s[260];
    fin.getline(s,260);
    for(char *t=strtok(s," ");t;t=strtok(NULL," "))
        strcpy(v[n++].c,t);
}

void sortare()
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(v[i].c,v[j].c)>0)
            {
                cuvant aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
}

void afisare()
{
    for(int i=0;i<n;i++)
        cout<<v[i].c<<" ";
}

int main()
{
    citire();
    sortare();
    afisare();
    return 0;
}