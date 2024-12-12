#include "iostream"
#include "cmath"

using namespace std;

bool isTriangulo(double x1, double y1, double x2, double y2, double x3, double y3,double &area,double &perimetro){
    double s1 = sqrt(pow((x1-x2),2)+ pow((y1-y2),2));
    double s2 = sqrt(pow((x2-x3),2)+ pow((y2-y3),2));
    double s3 = sqrt(pow((x1-x3),2)+ pow((y1-y3),2));
    if (s1+s2 > s3 and s1 + s3 > s2 and s2 + s3 > s1){
        perimetro = s1 + s2 + s3;
        double s = perimetro/2;
        area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
        return true;
    }
    else{
        return false;
    }
}

int main(){
    double x1,y1,x2,y2,x3,y3;
    double area = 0;
    double perimetro = 0;
    int intentos = 3;
    do {
        cout << "Ingresa la primera coordenada: " << endl;
        cin >> x1 >> y1;
        cout << endl;
        cout << "Ingresa la segunda coordenada: " << endl;
        cin >> x2 >> y2;
        cout << endl;
        cout << "Ingresa la tercera coordenada: " << endl;
        cin >> x3 >> y3;
        cout << endl;
        intentos--;
    }
    while(!isTriangulo(x1,y1,x2,y2,x3,y3,area,perimetro) and intentos  != 0);

    if (intentos == 0){
        cout << "YA NO PUEDES DAR MAS INTENTOS :c" << endl;
    }
    else{
        cout << "Es triangulo" << endl;
        cout << "Su area es: " << area << endl;
        cout << "Su perimetro es: " << perimetro << endl;
    }
    return 0;
}