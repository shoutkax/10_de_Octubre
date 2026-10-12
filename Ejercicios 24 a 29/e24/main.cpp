# include <iostream>
#include <windows.h>
using namespace std;

static int numero1=0, numero2=0, suma=0, resta=0, division=0, residuo=0;
static void pedirNumero() {
    cout <<"Ingresa el primer número: ";
    cin>>numero1;
    cout <<"Ingresa el segundo número: ";
    cin>>numero2;
}
static void sumaNumero() {
    suma= numero1 + numero2;
}
static void restaNumero() {
    resta = numero1 - numero2;
}
static void divisionNumero() {
    division = numero1 / numero2;
}
static void residuoNumero() {
    residuo = numero1 % numero2;
}
static void mostrarResultado() {
    cout <<"---------------"<<endl;
    cout <<"Resultado: "<<endl;
    cout <<"Suma: "<<suma<<endl;
    cout <<"Resta: "<<resta<<endl;
    cout <<"Division: "<<division<<endl;
    cout <<"Residuo: "<<residuo<<endl;
    cout <<"---------------"<<endl;
}
static void mostrarResultadoSinDivision() {
    cout <<"---------------"<<endl;
    cout <<"Resultado: "<<endl;
    cout <<"Suma: "<<suma<<endl;
    cout <<"Resta: "<<resta<<endl;
    cout <<"No se puede dividir por 0.";
    cout <<"---------------"<<endl;
}

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    cout <<"Ejercicio 24"<<endl;
    cout <<"----------------"<<endl;
    pedirNumero();
    sumaNumero();
    restaNumero();
    if (numero2==0) {
        mostrarResultadoSinDivision();
    } else {
        divisionNumero();
        residuoNumero();
        mostrarResultado();
    }

}