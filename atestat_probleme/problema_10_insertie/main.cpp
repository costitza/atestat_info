#include <bits/stdc++.h>

using namespace std;

ifstream in("sort.in");

int a[100], n;

void citire(){
    in >> n;
    for(int i = 0; i < n; i++)
        in >> a[i];
}

void sortare_insertie(){
    for(int i = 1;i < n;i++){
        int x = a[i];
        int poz = 0;
        for(int j = i - 1;j >= 0; j--){
            if(a[j] > x){
                a[j + 1] = a[j];
            }
            else{
                poz = j + 1;
                break;
            }
        }
        a[poz] = x;
    }
}

void afisare(){
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main() {
    citire();
    sortare_insertie();
    afisare();
    return 0;
}
