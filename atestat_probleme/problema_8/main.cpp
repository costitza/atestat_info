#include <bits/stdc++.h>

using namespace std;

ifstream in("mult.in");

int v[50], m;

void citire()
{
    in >> m;
    for(int i=0;i<m;i++)
    {
        in >> v[i];
    }
}

void rezolvare()
{
    for(int i=0;i<m-1;i++)
        for(int j=i+1;j<m;j++)
        {
            if(v[i]==v[j])
            {
                cout<<"nu sunt distincte";
                return;
            }

        }
    cout<<"sunt distincte";
}

int main()
{
    citire();
    rezolvare();
    return 0;
}

