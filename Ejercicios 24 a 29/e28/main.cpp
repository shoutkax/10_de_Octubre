# include <iostream>
# include <windows.h>
using namespace std;
// Conversor de temperatura: funciones para pedir los °C,
// calcular °F y K, y mostrar los resultados.
// Rechaza temperaturas por debajo del cero absoluto (-273.15).

static double tempUsuario=0, tempeKelvin=0, tempeFahrenheit=0;


static void tempCelsius() {
    cout<<"\nIngresa una temperatura en Celsius: ";
    cin>>tempUsuario;
    while (tempUsuario<-273.15) {
        cout<<"No se admiten temperaturas por debajo del cero absoluto. Intenta nuevamente: "<<endl;
        cin>>tempUsuario;
    }
}
static void tempKelvin() {
    tempeKelvin=tempUsuario+273.15;
}
static void tempFahrenheit() {
    tempeFahrenheit=(tempUsuario*(9.0/5.0))+32;
}
static void mostrarResultados() {
    cout<<"Celsius: "<<tempUsuario<<"°C"<<endl;
    cout<<"Kelvin: "<<tempeKelvin<<" K"<<endl;
    cout<<"Fahrenheit: "<<tempeFahrenheit<<"°F"<<endl;
}

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int opcion=0;
    cout << "Ejercicio 28."<<endl;
    cout << "Ingresa 0 para terminar el programa."<<endl;
    cin>>opcion;
    while (opcion!=0) {
        tempCelsius();
        tempKelvin();
        tempFahrenheit();
        mostrarResultados();
        cout<<endl;
        cout<<"Ingresa 0 para terminar el programa, o cualquier otro número para continuar comparando temperaturas"<<endl;
        cin>>opcion;
    }


    return 0;
}