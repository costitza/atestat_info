#include <bits/stdc++.h>

using namespace std;

long long  k;

long long  divizori(long long x)
{
    long long nr=0, d;
    for( d=1; d*d<x; d++)
        if(x%d==0)
            nr+=2;
    if(d*d==x)
        nr++;
    return nr;
}

void rezolvare(){
    for(long long i=1; ;i++)
        if(divizori(i)==k)
        {
            cout<<i;
            return;
        }
}

int main()
{
    cin>>k;
    rezolvare();
    return 0;
}

