#include <bits/stdc++.h>

/*
 * 4.	Se citesc din fişierul “sort.in”, de pe prima linie, 2 numere n şi m (1≤n,m≤50). De pe
 * următoarele 2 linii se citesc elementele a două şiruri de lungime n, respectiv m, , numere întregi,
 * de maxim 9 cifre, care sunt ordonate crescător. Să se scrie un program care să construiască în memorie
 * un şir care conţine rezultatul interclasării celor două şiruri. Şirul rezultat se va afişa în fişierul ”sort.out”.
 * */

using namespace std;

ifstream fin("bac.txt");

int n, m, p, a[100], b[100], c[201];

void citire() {
    fin >> n>>m;
    for (int i = 0; i < n; i++)
        fin >> a[i];
    for (int i = 0; i < m; i++)
        fin >> b[i];
}

void interclasare() {
    p=0;
    int i,j;
    for(i=0, j=0; i<n && j<m; i++)
    {
        if(a[i]<b[j])
        {
            c[p++]=a[i++];
        }
        else
            c[p++]=b[j++];
    }
    for(;i<n;i++)
        c[p++]=a[i];
    for(;j<m;j++)
        c[p++]=b[j];
}

void afisare() {
    for (int i = 0; i < p; i++)
        cout << c[i] << ' ';
    cout << '\n';
}

int main()
{
    citire();
    interclasare();
    afisare();
    return 0;
}