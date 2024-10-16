#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct cuvant{
    char c[250];
}a[150], b[150];

void citire(char name[], cuvant arr[]){
    ifstream in(name);
    for(int i = 0; i < 7;i++){
        in >> arr[i].c;
    }
}

void interclasare(){
    int i, j;
    for(i = 0, j = 0; i < 7 && j < 7;){
        if(strcmp(a[i].c, b[j].c) == 0){
            cout << a[i].c << ' ';
            i++;
            j++;
        }
        else if(strcmp(a[i].c, b[j].c) > 0){
            cout << b[j].c << ' ';
            j++;
        }
        else{
            cout << a[i].c << ' ';
            i++;
        }
    }
    for(i;i < 7;i++){
        cout << a[i].c << ' ';
    }
    for(j;j < 7;j++){
        cout << b[j].c << ' ';
    }
}

int main() {
    citire("X.txt", a);
    citire("Y.txt", b);
    interclasare();
    return 0;
}
