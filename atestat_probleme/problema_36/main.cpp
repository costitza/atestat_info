#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

char a[256],n,l=0,lmax,v;

void citire()
{
    cin.getline(a,256);
    n=strlen(a);
}

int main()
{
    citire();
    for(int i=0;i<n;i++)
    {
        if(isdigit(a[i]))
            l++;
        else
        {
            if(l>lmax)
            {
                lmax=l;
                v=i-1;
            }
            l=0;
        }

    }
    if(l>lmax)
    {
        lmax=l;
        v=n-1;
    }

    for(int i=v-lmax+1;i<=v;i++)
        cout<<a[i];
    return 0;
}