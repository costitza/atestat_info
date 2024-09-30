#include <bits/stdc++.h>

/*
 * 14.	Se citeşte din fişierul “progresie.in”, de pe prima linie, un număr n (1≤n≤50). De pe următoarea linie se citesc
 * elementele unui şir de lungime n, numere întregi, de maxim 9 cifre.. Să se scrie un program care să verifice dacă
 * elementele şirului formează o progresie aritmetică sau o progresie geometrică. În caz afirmativ
 * să se afişeze tipul progresiei şi raţia, iar în caz negativ să se scrie un mesaj corespunzător în fişierul ”progresie.out”.
 * */

using namespace std;

ifstream in("progresie.in");
ofstream out("progresie.out");

int a[100], n;

void citire(){
    in >> n;
    for(int i = 0; i < n; i++)
        in >> a[i];
}

void rezolvare(){
    int r = a[1] - a[0];
    bool aritmetica = true;
    for(int i = 2; i < n; i++)
        if(a[i] - a[i - 1] != r){
            aritmetica = false;
            break;
        }
    if(aritmetica){
        out << "Progresie aritmetica cu ratia " << r;
        return;
    }
    double q = (double)a[1] / a[0];
    bool geometrica = true;
    for(int i = 2; i < n; i++)
        if((double)a[i] / a[i - 1] != q){
            geometrica = false;
            break;
        }
    if(geometrica){
        out << "Progresie geometrica cu ratia " << q;
        return;
    }
    out << "Nu este progresie";

}


int main() {
    citire();
    rezolvare();
    return 0;
}
