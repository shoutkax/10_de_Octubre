#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int ejercicioSeleccionado = 0;
    cout <<"Escoge un número de ejercicio (1 a 75): " ;
    cin >> ejercicioSeleccionado;
    switch (ejercicioSeleccionado) {
        case 1: {
            string nombre;
            int edad;
            cout << "Ejercicio 01." << endl;
            cout << "¿Cuál es tu nombre?";
            cin >> nombre;
            cout << "¿Cuántos años tienes?";
            cin >> edad;
            cout <<"Hola "<<nombre<<", El próximo año tendrás "<<edad+1<<" años"<<endl;
            break;
        }
        default:
            cout <<"Número del ejercicio no válido" << endl;
    }
    return 0;
}
