#include <bits/stdc++.h>

/*
 * 28.	Se citeşte un număr natural n (1≤n≤15). Să se afişeze în fişierul “Pascal.out” triunghiul
 * lui Pascal care are n + 1 linii şi n + 1 coloane. Regulile după care se construieşte triunghiul lui Pascal sunt:
    a.	Pe coloana 0 şi pe diagonala principală se pune 1.
    b.	Restul elementelor din triunghi se obţin adunând elementul aflat  pe linia anterioară pe aceeaşi
    coloană cu el cu elementul aflat  pe linia anterioară şi pe coloana anterioară.
 * */

using namespace std;

ifstream fin("mat.in");

int n, mat[100][100];

void citire() {
    fin >> n;
}

void rezolvare() {
    for (int i = 0; i <= n; i++) {
        mat[i][0] = 1;
        mat[i][i] = 1;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < i; j++)
            mat[i][j] = mat[i - 1][j] + mat[i - 1][j - 1];
    }
}

void afisare() {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++)
            cout << mat[i][j] << ' ';
        cout << '\n';
    }
}

int main()
{
    citire();
    rezolvare();
    afisare();
    return 0;
}
