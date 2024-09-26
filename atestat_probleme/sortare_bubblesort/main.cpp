#include <iostream>

//se compara fiecare element cu vecinul ce urmeaza si se interschimba cu acesta daca este cazul
//aceasta operatie se repeta pana cand nu s-a mai facut nicio interschimbare intr-o intreaga parcurgere a vectorului
using namespace std;

int x, v[100];

void citire(int a[], int &n) {
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void sortareBule(int a[], int n) {
    int p = n;
    bool ok;
    do{
        ok = false;
        p--;
        for(int i = 0; i < p; i++) {
            if(a[i] > a[i + 1]) {
                int aux = a[i];
                a[i] = a[i + 1];
                a[i + 1] = aux;
                ok = true;
            }
        }
    }while(ok);
}

void afisare(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    cin >> x;
    citire(v, x);
    sortareBule(v, x);
    afisare(v, x);
    return 0;
}
