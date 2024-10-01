#include <bits/stdc++.h>

/*
 * 3.	Se citesc din fişierul “pol.in”, de pe prima linie, gradele a două polinoame
 * n,m (0≤n,m≤50). De pe următoarele două linii se citesc două şiruri de numere reale care
 * reprezintă coeficienţii celor două polinoame, în ordinea crescătoare a gradelor. Să se scrie un
 * program care să construiască în memorie şi să afişeze în fişierul ”pol.out” produsul polinoamelor.
 * Coeficienţii produsului se vor afişa cu două zecimale separaţi printr-un singur spaţiu .
 * */

using namespace std;

ifstream fin("bac.txt");
int n, m, p, a[100], b[100], c[201];

void citire() {
    fin >> n>>m;
    for (int i = 0; i <= n; i++)
        fin >> a[i];
    for (int i = 0; i <= m; i++)
        fin >> b[i];
}

void poliprod() {
    p=n+m;
    for(int i=0; i<=n; i++)
        for(int j=0; j<=m; j++)
        {
            c[i+j]+=a[i]*b[j];
        }
}

void afisare() {
    cout<<p<<'\n';
    for (int i = 0; i <= p; i++)
        cout << c[i] << ' ';
    cout << '\n';
}

int main()
{
    citire();
    poliprod();
    afisare();
    return 0;
}