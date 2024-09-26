#include <iostream>

// se compara fiecare elem cu toate elem de dupa el si se
// interschimba in caz in care sunt asezate invers decat ar trebui
using namespace std;

int n, v[100];

void citire(int &n, int a[]) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

void sortareInterclasare(int n, int a[]){
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
}

void afisare(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    citire(n, v);
    sortareInterclasare(n, v);
    afisare(n, v);
    return 0;
}
