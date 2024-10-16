#include <iostream>
#include <cstring>

/*
 * 30.	Se citesc de la tastatură două cuvinte de maxim 20 de litere. Să se scrie un program
 * care verifică dacă unul este anagrama celuilalt. Un cuvânt este anagramă pentru altul dacă
 * cele două cuvinte conţin aceleaşi litere de acelaşi număr de ori, dar nu neapărat în aceeaşi ordine.
 * */

using namespace std;

char c1[250], c2[250];
int frecv[30];

void rezolvare(){
    for(int i = 0; i < strlen(c1); i++){
        frecv[c1[i] - 'a']++;
    }
    for(int i = 0; i < strlen(c2); i++){
        frecv[c2[i] - 'a']--;
    }
    for(int i = 0;i < 30; i++){
        if(frecv[i] != 0){
            cout << "Nu";
            return;
        }
    }
    cout << "Da";
}

int main() {
    cin >> c1 >> c2;
    rezolvare();
    return 0;
}
