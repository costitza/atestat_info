#include <bits/stdc++.h>

using namespace std;

ifstream in("mult.in");
ofstream out("mult.out");

int n,m,a[50],b[50],c[50],o;

void citire(){
    in >> n >> m;
    for(int i=0; i<n;i++)
        in >> a[i];
    for(int i=0; i<m;i++)
        in >> b[i];
}

int cautare(int x,int v[],int p){
    for(int i=0; i<p; i++){
        if(v[i]==x)
            return 1;
    }
    return 0;
}

void rezolvare(){
    for(int i=0;i<n;i++){
        c[o++]=a[i];
    }
    for(int i=0;i<m;i++) {
        if(cautare(b[i],a,n)==0)
            c[o++]=b[i];
    }
}

void afisare(){
    if(o==0)
        out<<"Multime vida";
    else
        for(int i=0;i<o;i++)
            out<<c[i]<<" ";
}

int main(){
    citire();
    rezolvare();
    afisare();
    return 0;
}
