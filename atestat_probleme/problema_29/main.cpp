#include <bits/stdc++.h>

/*
 * 29.	Se citesc de la tastatură numitorii şi numărătorii (numere întregi de maxim 9 cifre) a două fracţii.
 * Să se scrie un program care simplifică suma celor două fracţii şi afişează pe ecran numitorul şi numărătorul
 * fracţiei rezultate.
 * */

using namespace std;

ifstream fin("mat.in");

struct fractie{
    int a;
    int b;
}f1,f2,s;

void citire() {
    fin>>f1.a>>f1.b;
    fin>>f2.a>>f2.b;
}

int cmmdc(int a,int b)
{
    while(b)
    {
        int aux=a%b;
        a=b;
        b=aux;
    }
    return a;

}

void rezolvare() {
    s.a=f1.a*f2.b+f1.b*f2.a;
    s.b=f1.b*f2.b;
    int p=cmmdc(s.a,s.b);
    s.a/=p;
    s.b/=p;
}

void afisare()
{
    cout<<s.a<<" "<<s.b;
}

int main()
{
    citire();
    rezolvare();
    afisare();
    return 0;
}