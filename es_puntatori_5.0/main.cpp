/*5. Definire una variante della funzione “scambia” che scambia i valori
 * di due variabili utilizzando i puntatori e usarla all’interno del main*/

#include <iostream>
using namespace std;

void scambia(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    int *p1, *p2;

    a=3, b=5;

    p1=&a;
    p2=&b;

    scambia(p1, p2);

    cout << a << " " << b;
    return 0;
}
