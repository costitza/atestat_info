#include <bits/stdc++.h>

using namespace std;

ifstream out("prietene.out");

int n;

int prim(int n)
{
    if(n%2==0 && n>2 || n<2)
        return 0;
    for(int i=3; i*i<=n; i=i+2)
        if(n%i==0)
            return 0;
    return 1;

}

void afisare()
{
    if(n<4){
        out << "Nu exista";
        return;
    }
    out << "(2 3)";
    int ant=1,curent;
    for(int i=5;i<n;i=i+2){
        curent=prim(i);
        if(ant==1 && curent==1)
            out << " (" << i - 2 << " " << i << " )";
        ant=curent;
    }
}

int main()
{
    cin>>n;
    afisare();
    return 0;
}