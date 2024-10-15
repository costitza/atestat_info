#include <iostream>

/*
 * 33.	Se citeşte din fişierul “sir.in”, de pe prima linie, un număr natural n (1≤n≤50). De pe următoarea
 * linie se citesc n numere naturale de maxim 9 cifre. Să se afişeze toate perechile de elemente egal depărtate
 * de mijloc, care au aceeași suma a cifrelor.
 * */

using namespace std;

int n,a[100];

void citire()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
}

int sumcif(int x)
{
    int sum=0;
    while(x>0)
    {
        sum=sum+x%10;
        x=x/10;
    }
    return sum;
}

void afisare()
{
    for(int st=0,dr=n-1;st<dr;st++,dr--)
    {
        if(sumcif(a[st])==sumcif(a[dr]))
            cout<<a[st]<<" "<<a[dr]<<" ";
    }
}

int main()
{

    citire();
    afisare();
    return 0;
}