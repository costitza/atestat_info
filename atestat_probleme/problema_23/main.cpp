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

void verif(){
    for(int i = 0;i < n - 1;i++){
        for(int j = 0;j < n - i - 1;j++){
            if(mat[i][j]%2 != mat[0][0]){
                cout << "Nu";
                return;
            }
        }
    }
    cout << "Da";
}

int main()
{
    citire();
    verif();
    return 0;
}
