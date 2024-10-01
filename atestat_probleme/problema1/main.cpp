#include <bits/stdc++.h>

/*
 * 1.	Se citesc din fişierul “numere.in”, de pe 2 linii consecutive, 2 numere mari scrise în baza 10,
 * fiecare având cel mult 50 de cifre. Să se scrie un program care să calculeze suma lor, folosind şiruri
 * în care se memorează cifrele numerelor. Rezultatul se va afişa în fişierul ”numere.out”.
 * */

using namespace std;

ifstream fin("numere.in");
ofstream fout("numere.out");

struct bigNumber{
    int nrcif;
    int cif[50];
}a,b,s;

void transformare(char t[],bigNumber &a)
{
    a.nrcif=strlen(t);
    for(int i=a.nrcif-1, j=0;i>=0;i--,j++)
    {
        a.cif[i]=t[j]-'0';
    }
}

void adunare()
{
    if(a.nrcif>b.nrcif)
        s.nrcif=a.nrcif;
    else
        s.nrcif=b.nrcif;
    int minte=0;
    for(int i=0;i<s.nrcif;i++)
    {
        s.cif[i]=(a.cif[i]+b.cif[i]+minte)%10;
        minte=(a.cif[i]+b.cif[i]+minte)/10;
    }
    if(minte!=0)
    {
        s.cif[s.nrcif++]=minte;
    }
}

void afisare(bigNumber s)
{
    for(int i=s.nrcif-1;i>=0;i--)
        fout<<s.cif[i];
}

void citire()
{

    char t[50];
    fin.getline(t,50);
    transformare(t,a);
    fin.getline(t,50);
    transformare(t,b);
}

int main()
{
    citire();
    adunare();
    afisare(s);
    return 0;
}
