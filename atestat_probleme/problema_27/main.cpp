#include <bits/stdc++.h>

/*
 * 27.	Se citesc din fişierul “mat.in” , de pe prima linie, patru numere naturale n, m, l şi c
 * (1≤n,m≤50 , 1≤l ≤n, 1≤c ≤m) şi de pe următoarele n linii o matrice cu n linii şi m coloane, cu elemente
 * numere întregi, de maxim 9 cifre.  Să se scrie un program  care să şteargă din matrice linia l şi coloana
 * c şi afişează matricea rezultată în fişierul “mat.out”.
 * */

using namespace std;

ifstream fin("mat.in");

int n,m,l,c,a[100][100];

void citire()
{
    fin>>n>>m>>l>>c;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            fin>>a[i][j];
}

void stergere()
{
    l=l-1;
    c=c-1;
    for(int i=l+1; i<n; i++)
        for(int j=0; j<c; j++)
        {
            a[i-1][j]=a[i][j];
        }
    for(int i=0; i<l; i++)
        for(int j=c+1; j<m; j++)
        {
            a[i][j-1]=a[i][j];
        }
    for(int i=l+1; i<n; i++)
        for(int j=c+1; j<m; j++)
        {
            a[i-1][j-1]=a[i][j];
        }
    if(l<n)
        n=n-1;
    if(c<m)
        m=m-1;
}

void afisare()
{
    for(int i=0; i<n; i++)
    {
        cout<<endl;
        for(int j=0; j<m; j++)
            cout<<a[i][j]<<" ";
    }

}

int main()
{
    citire();
    stergere();
    afisare();

    return 0;
}