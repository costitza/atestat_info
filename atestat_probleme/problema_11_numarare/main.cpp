#include <iostream>

// pentru fiecare elem se numara cate elem sunt mai mici decat el si
// se determina pozitia acestuia in vectorul sortat

// vom numara elem mai mici sau egale aflate in vector inainte numarului si elem mai mici
// aflate in vector dupa numarul respectiv
using namespace std;

int n, a[100];

void citire() {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void sortareNumarare(){
    int c[100];
    for(int i = 0;i < n;i++){
        int nr = 0;
        for(int j = 0;j < i;j ++){
            if(a[j] <= a[i]){
                nr++;
            }
        }
        for(int j = i+1;j < n;j++){
            if(a[j] < a[i]){
                nr++;
            }
        }
        c[nr] = a[i];
    }
    for(int i = 0;i < n;i++){
        a[i] = c[i];
    }
}

void afisare() {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    cin >> n;
    citire();
    sortareNumarare();
    afisare();
    return 0;
}
