#include <bits/stdc++.h>

/*
 * 2.	Se citesc din fişierul “pol.in”, de pe prima linie, gradele a două polinoame n,m (0≤n,m≤50).
 * De pe următoarele două linii se citesc două şiruri de numere reale care reprezintă coeficienţii celor
 * două polinoame, în ordinea crescătoare a gradelor. Să se scrie un program care să construiască în memorie
 * şi să afişeze în fişierul ”pol.out” suma polinoamelor. Coeficienţii sumei se vor afişa cu două zecimale
 * separaţi printr-un singur spaţiu.
 * */

using namespace std;

ifstream fin("bac.txt");
int n, m, p;
float a[100], b[100], c[201];

void citire() {
    fin >> n>>m;
    for (int i = 0; i <= n; i++)
        fin >> a[i];
    for (int i = 0; i <= m; i++)
        fin >> b[i];
}

void polisum() {
    if(n>=m)
        p=n;
    else
        p=m;
    for(int i=0; i<=p; i++)
    {
        c[i]=a[i]+b[i];
    }
    while(p>0 && c[p]==0)
    {
        p--;
    }
}

void afisare() {
    cout << p << '\n';
    cout << fixed;
    for (int i = 0; i <= p; i++)
        cout << setprecision(2) << c[i] << ' ';
    cout << '\n';
}

int main()
{
    citire();
    polisum();
    afisare();
    return 0;
}