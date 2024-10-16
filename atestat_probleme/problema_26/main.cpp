#include <bits/stdc++.h>

/*
 * 26.	Se citesc din fişierul “mat.in” , de pe prima linie, două numere naturale n şi m (1≤n,m≤50)
 * şi de pe următoarele n linii o matrice cu n linii şi m coloane cu elemente numere naturale, de maxim
 * 9 cifre.  Să se scrie un program care afişează în fişierul “mat.out”, câte unul pe linie, numerele din
 * matrice care au număr maxim de nrdiv
 * */

using namespace std;

ifstream in("mat.in");
ofstream out("mat.out");

struct Numar {
    int val;
    int nrdiv;
}a[50][50];

int n, m;

int divizori(int x){
    int nr = 2;
    int d;
    for(d = 1; d * d < x; d++)
        if(x % d == 0)
            nr += 2;
    if(d * d == x){
        nr++;
    }
    return nr;
}

int max_div = 0;

void citire() {
    in >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            in >> a[i][j].val;
            a[i][j].nrdiv = divizori(a[i][j].val);
            if(max_div < a[i][j].nrdiv)
                max_div = a[i][j].nrdiv;
        }
}

void afisare(){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(a[i][j].nrdiv == max_div)
                out << a[i][j].val << '\n';
}


int main() {
    citire();
    afisare();
    return 0;
}
