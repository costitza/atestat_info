#include <iostream>
#include <fstream>
#include <cmath>

/*
 * 31.	Se citeşte din fişierul “sir.in”, de pe prima linie, un număr natural n (1≤n≤50). De pe următoarea linie
 * se citesc n numere naturale de maxim 9 cifre. Să se scrie un program care să afișeze pe ecran câte din elementele
 * șirului sunt termeni ai șirului lui Fibonacci. (Șirul lui Fibonacci 1,1,2,3,5,8,13,…).
 * */

using namespace std;

ifstream fin("sir.in");

bool esteInFibonacci(int n) {
    float radical1 = sqrt(5*n*n+4);
    float radical2 = sqrt(5*n*n-4);

    return
            radical1 - floor(radical1) < 0.0001 ||
            radical2 - floor(radical2) < 0.0001;
}

int main() {
    int n, contor = 0;
    fin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        fin >> x;
        if (esteInFibonacci(x))
            contor++;

        cout << contor;
        return 0;
    }
}