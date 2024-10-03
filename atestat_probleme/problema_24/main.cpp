#include <bits/stdc++.h>

/*
 * 24.	Se citesc din fişierul “mat1.in” de pe prima linie, două numere naturale n1(1≤n1≤50) şi
 * m1 (1≤m1 ≤50) şi de pe următoarele n1 linii o matrice cu n1 linii şi m1 coloane. Analog, se citesc
 * din fişierul “mat2.in”, de pe prima linie, două numere naturale n2 (1≤n2≤50) şi m2 (1≤n≤50) şi de pe
 * următoarele n2 linii o matrice cu n2 linii şi m2 coloane.  Elementele celor 2 matrice sunt numere reale.
 * Să se scrie un program în care se calculează produsul celor două matrice. Dacă produsul se poate calcula atunci
 * se va afişa matricea rezultată în fişierul “mat.out”, iar în caz contrar se va afişa un mesaj corespunzător.
 * */

using namespace std;

ofstream out("mat.out");

int n1, m1, n2, m2, a[50][50], b[50][50], c[50][50];

void citire(int a[50][50], int  &n, int &m, char nume[]){
    ifstream in(nume);
    in >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            in >> a[i][j];
    in.close();
}

void inmultire(int a[50][50], int n1, int m1, int b[50][50], int n2, int m2){
    if(m1 != n2){
        out << "Matricele nu se pot inmulti";
        return;
    }
    for(int i = 0; i < n1; i++)
        for(int j = 0; j < m2; j++){
            for(int k = 0; k < m1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < m2; j++)
            out << c[i][j] << " ";
        out << endl;
    }
}

int main() {
    citire(a, n1, m1, "mat1.in");
    citire(b, n2, m2, "mat2.in");
    return 0;
}
