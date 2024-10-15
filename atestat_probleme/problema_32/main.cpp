#include <iostream>
#include <fstream>

/*
 * 32.	Se citesc din fişierul “numere.in” doua numere naturale de maxim 9 cifre. Se cere să se afișeze
 * pe ecran mesajul “DA“, dacă cele două numere sunt termeni consecutivi ai șirului lui Fibonacci, respectiv
 * mesajul “NU“, daca cele două numere nu sunt termeni consecutivi ai șirului lui Fibonacci. (Șirul lui Fibonacci
 * 1,1,2,3,5,8,13,…).
 * */

using namespace std;

ifstream in("numere.in");

int a, b;

void citire(){
    in >> a >> b;
}

void calcul_fibo(){
    int f1 = 1;
    int f2 = 1;
    if(a > b){
        int aux = a;
        a = b;
        b = aux;
    }
    while(f2 < a){
        int f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    if(f2 == a){
        if(f1 + f2 == b){
            cout << "DA";
            return;
        }
    }
    cout << "NU";
}

int main()
{
    citire();
    calcul_fibo();
    return 0;
}