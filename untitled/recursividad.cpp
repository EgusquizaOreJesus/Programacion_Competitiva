/*
 * ESTRUCTURAS DE CONTROL SELECTIVAS:
 */

#include "iostream"

using namespace std;

// funcion recursiva potencia
int Potencia(int base, int exp){
    // base, TODA RECURSION TIENE QUE TENER UNA CASO BASE
    if (exp == 0){
        return 1;
    }
    else{
        return base * Potencia(base, exp-1);
    }
}


// funcion recursiva para sumar digitos:
int sumarDigitos(int n){
    if (n < 10){
        return n;
    }
    else{
        // agarrar el ultimo digito
        int ul = n%10;
        // hago la funcion recursivamente para el numero quitando su ultimo digito:
        return ul + sumarDigitos(n/10);
    }
}

// MCD
int MCD(int n1, int n2){
    if (n2 == 0){
        return n1;
    }
    else{
        return MCD(n2, n1%n2);
    }
}

int main(){
    int n1 = 120;
    int n2 = 80;

    int result = MCD(n1,n2);
    cout << "Resultado: " << result << endl;


}


