#include <bits/stdc++.h>

using namespace std;

ifstream in("mat.in");

int n;
int a[4][4];

void citire()
{
    in >> n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            in >> a[i][j];
}

int nrCif(int x)
{
    int nr=0;
    do
    {
        x/=10;
        nr++;
    }
    while(x);
    if(nr%2==0)
        return 1;
    return 0;
}

void rez()
{
    int nr=0;
    for(int i=1; i<n; i++)
        for(int j=0; j<i; j++)
            if(nrCif(a[i][j]) == 1)
                nr++;
    cout<<nr;
}

int main()
{
    citire();
    rez();
    return 0;
}
