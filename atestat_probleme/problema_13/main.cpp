#include <bits/stdc++.h>

using namespace std;

ifstream in("mult.in");

int n;

struct NrDiv{
    int nrdiv;
    int x;
} a[51];

int divizori(int x){
    int p=0, i;
    for(i=1; i*i<x; i++)
    {
        if(x%i==0) {
            p += 2;
        }
    }
    if(i*i==x)
        p++;
    return p;
}

void citire()
{
    in >> n;
    for(int i=0; i<n; i++){
        in >> a[i].x;
        a[i].nrdiv=divizori(a[i].x);
    }
}

void rez()
{
    for(int i=0; i<n-2; i++)
    {
        if(a[i].nrdiv==a[i+1].nrdiv && a[i].nrdiv==a[i+2].nrdiv) {
            cout << "Da";
            return;
        }
    }
    cout<<"Nu";
}

int main()
{
    citire();
    rez();
    return 0;
}

