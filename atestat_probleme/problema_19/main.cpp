#include <bits/stdc++.h>

using namespace std;

ifstream in("mat.in");

int n, a[51][51];

void citire(){
    in >> n;
    for(int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            in >> a[i][j];
        }
    }
}

int sumDp()
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+a[i][i];
    }
    return sum;
}

int sumDs()
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+a[i][n-i-1];
    }
    return sum;
}

int sumL(int l)
{
    int sum=0;
    for(int  j=0; j<n; j++)
    {
        sum=sum+a[l][j];
    }
    return sum;
}

int sumC(int c)
{
    int sum=0;
    for(int  i=0; i<n; i++)
    {
        sum=sum+a[i][c];
    }
    return sum;
}

int rez()
{
    int v=sumDp();
    if(v!=sumDs())
        return 0;
    for(int i=0; i<n; i++)
    {
        if(v!=sumL(i) ||  v!=sumC(i))
            return 0;
    }
    return 1;
}

int main()
{
    citire();
    return 0;
}
