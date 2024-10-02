#include <bits/stdc++.h>

/*
 * 25.	Se citesc din fişierul “mat.in”, de pe prima linie, două numere naturale n şi m (1≤n,m≤50)
 * şi de pe următoarele n linii o matrice cu n linii şi m coloane cu elemente numere întregi, de maxim 9
 * cifre.  Să se scrie un program care afişează în fişierul “mat.out”, câte unul pe linie, numerele din matrice
 * care sunt în acelaşi timp maxime pe linia şi minime pe coloana pe care se află. Dacă nu există astfel de numere se
 * va afişa un mesaj corespunzător.
 * */

using namespace std;

ifstream in("mat.in");
ofstream out("mat.out");

int n, m, a[51][51];

void citire(){
    in >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            in >> a[i][j];
}

int vmax[51], vmin[51];

void calcul(){
    for(int i = 1; i <= n; i++){
        vmax[i] = a[i][1];
        for(int j = 2; j <= m; j++)
            vmax[i] = max(vmax[i], a[i][j]);
    }

    for(int j = 1; j <= m; j++){
        vmin[j] = a[1][j];
        for(int i = 2; i <= n; i++)
            vmin[j] = min(vmin[j], a[i][j]);
    }
}

void afisare(){
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++)
            if(a[i][j] == vmax[i] && a[i][j] == vmin[j])
                out << a[i][j] << '\n';
    }
}

int main() {
    citire();
    calcul();
    afisare();
    return 0;
}
