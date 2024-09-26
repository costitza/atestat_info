#include <bits/stdc++.h>

using namespace std;

ifstream in("mat.in");

int mat[51][51];
int n;

void citire(){
    in >> n;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            in >> mat[i][j];
        }
    }
}

int sum_cif(int x){
    int s = 0;
    while(x){
        s += x % 10;
        x /= 10;
    }
    return (s % 2 == 0);
}

void verif(){
    for(int i = 0;i < n;i++){
        for(int j = n - i;j < n;j++){
            if(sum_cif(mat[i][j]) == 1){
                cout << "Da";
                return;
            }
        }
    }
    cout << "Nu";
}

int main()
{
    citire();
    verif();
    return 0;
}