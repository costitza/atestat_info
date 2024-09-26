#include <bits/stdc++.h>

using namespace std;

ifstream in("mat.in");

int n, a[51][51],s=0;

int prim (int x)
{
    if (x%2==0 && x>2 || x<2)
        return 0;
    for (int d=3;d*d<x;d+=2)
    {
        if (x%d==0)
            return 0;
    }
    return 1;
}

void citire ()
{
    in >> n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
            in >> a[i][j];
    }
}

void rez()
{
    for(int j=1; j<=n; j++)
    {
        for(int i=j+1; i<=n; i++)
        {
            if (prim(a[j][i])==1)
                s+=a[j][i];
        }
    }
    cout<<s;
}

int main()
{
    citire();
    rez();
    return 0;
}
