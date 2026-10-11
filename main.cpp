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
            cout << "---------------" << endl;
            cout << "¿Cuál es tu nombre?";
            cin >> nombre;
            cout << "¿Cuántos años tienes?";
            cin >> edad;
            cout <<"Hola "<<nombre<<", El próximo año tendrás "<<edad+1<<" años"<<endl;
            break;
        }
        case 2: {
            int num1=0, num2=0, suma=0, resta=0, división=0, residuo=0;
            cout << "Ejercicio 02." << endl;
            cout << "---------------" << endl;
            cout << "Ingresa el primer número: ";
            cin >> num1;
            cout << "Ingresa el segundo número: ";
            cin >> num2;
            cout << endl;
            //Suma
            suma = num1+num2;
            resta = num1-num2;
            división = num1/num2;
            residuo = num1%num2;
            cout<<"Suma: "<<suma<<endl;
            cout<<"Resta: "<<resta<<endl;
            cout<<"división: "<<división<<endl;
            cout<<"Residuo: "<<residuo<<endl;
            break;
        }
        case 3: {
            int num=0;
            cout << "Ejercicio 03." << endl;
            cout << "---------------" << endl;
            cout<<"ingresa un número de 3 cifras (de 100 a 999)";
            cin >> num;
            if (num < 100 || num > 999) {
                cout<<"número no válido";
            }else {
                int centenas = num/100;
                int decenas = (num%100)/10;
                int unidades = num%100;
                cout<<"Centenas: "<<centenas<<endl;
                cout<<"Decenas: "<<decenas<<endl;
                cout<<"Unidades: "<<unidades<<endl;
            }
            }
            break;
        case 4: {
            int totalSegundos=0, horas=0,minutos=0,segundos=0;
            cout << "Ejercicio 04." << endl;
            cout << "---------------" << endl;
            cout<<"Ingrese una cantidad de tiempo en segundos";
            cin >> totalSegundos;
            horas = totalSegundos/3600;
            minutos= (totalSegundos%3600)/60;
            segundos = totalSegundos%60;
            cout<<"Horas: "<<horas<<endl;
            cout<<"Minutos: "<<minutos<<endl;
            cout<<"Segundos: "<<segundos<<endl;
            break;
        }
        default: {
            cout <<"Número del ejercicio no válido";
            break;
        }
    }
    return 0;
}
