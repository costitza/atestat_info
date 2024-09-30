#include <bits/stdc++.h>

using namespace std;

ifstream in("sort.in");

int n;
int a[100];

void citire(){
    in >> n;
    for(int i = 1; i <= n; i++){
        in >> a[i];
    }
}

void sortare_selectie(){
    for(int i = 1; i <= n; i++){
        int poz_min = i;
        for(int j = i + 1; j <= n; j++){
            if(a[j] < a[poz_min]){
                poz_min = j;
            }
        }
        swap(a[i], a[poz_min]);
    }
}

void afisare(){
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }

}

int main() {
    citire();
    sortare_selectie();
    afisare();
    return 0;
}
