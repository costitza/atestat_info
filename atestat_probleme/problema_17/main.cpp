#include <bits/stdc++.h>

using namespace std;

int n;

int nrdiv(int x){
    int nr=0,d;
    for(d=1; d*d<x; d++)
        if(x%d==0)
            nr=nr+2;
    if(d*d==x)
        nr++;
    return nr;
}

void rez(int n){
    int nrd=nrdiv(n);
    for(int i=0; i<n; i++)
        if(nrdiv(i)>=nrd){
            cout<<"NU";
            return;
        }
    cout<<"DA";
}

int main()
{
    cin>>n;
    rez(n);
    return 0;
}

