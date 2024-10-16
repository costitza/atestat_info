#include <iostream>

/*
 * 40.	Se citesc două triplete de numere naturale (d1,m1,y1), respectiv (d2,m2,y2). Să se verifice dacă
 * cele două triplete reprezintă două date calendaristice valide, în care d1,d2 = ziua (day), m1,m2 = luna
 * (month), y1,y2 = anul (year). Se consideră an bisect orice an care fie este divizibil cu 400, fie este
 * divizibil cu 4 dar nu şi cu 100.
   Dacă cele două triplete reprezintă două date calendaristice valide, atunci în ipoteza că prima dată
   reprezintă ziua de naştere a unei persoane, iar a doua dintre ele reprezintă data curentă, să se determine,
   în ani împliniţi, vârsta persoanei la data curentă.
   Se garantează că prima dintre date este anterioară celei de-a doua.

 * */

using namespace std;

struct Data{
    int d, m, y;
}d1, d2;

int esteBisect(Data d){
    return (d.y % 400 == 0 ||
    d.y % 4 == 0 && d.y % 100 == 0);
}

void citire(){
    cin >> d1.d >> d1.m >> d1.y;
    cin >> d2.d >> d2.m >> d2.y;
}

bool verif_data(Data d){
    if(d.m < 1 || d.m > 12){
        return false;
    }
    if(d.m == 2){
        if(esteBisect(d)){
            return d.d >= 1 && d.d <= 29;
        }
        return d.d >= 1 && d.d <= 28;
    }
    if(d.m == 1 || d.m == 3 || d.m == 5 || d.m == 7 || d.m == 8 || d.m == 10 || d.m == 12)
        return d.d >= 1 && d.d <= 31;
    return d.d >= 1 && d.d <= 30;
}

int diferentaAn(Data d1, Data d2){
    int diferenta = d2.y - d1.y;
    if(d1.m < d1.m || d2.m == d1.m && d1.d < d2.d)
        diferenta--;
    return diferenta;
}

int main() {
    citire();
    if(verif_data(d1) == true && verif_data(d2) == true){
        cout << diferentaAn(d1, d2) << " ani";
    }
    else {
        cout << "data invalida";
    }

    return 0;
}
