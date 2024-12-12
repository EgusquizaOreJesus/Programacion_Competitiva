#include <iostream>

int calcularMCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return calcularMCD(b, a % b);
    }
}

int main() {
    int num1, num2;

    std::cout << "Ingrese primer numero: ";
    std::cin >> num1;

    std::cout << "Ingrese segundo numero: ";
    std::cin >> num2;

    int mcd = calcularMCD(num1, num2);

    std::cout << "MCD: " << mcd << std::endl;

    return 0;
}
