#include <bits/stdc++.h>

using namespace std;

ifstream in("cmmdc.in");

int a[100], n;

void citire(){
    in >> n;
    for(int i = 0; i < n; i++)
        in >> a[i];
}

int cmmdc(int a, int b){
    while(a != 0){
        int r = b % a;
        b = a;
        a = r;
    }
    return b;
}

void parcurgere(){
    int numar = a[0];
    for(int i = 1;i < n;i++){
        numar = cmmdc(numar, a[i]);
    }
    cout << numar;
}

int main() {
    citire();
    parcurgere();
    return 0;
}
