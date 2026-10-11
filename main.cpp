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
        case 5: {
            string nombreProducto;
            float precio=0, impuesto=0.19, valorImpuesto=0, subtotal=0,total=0;
            int cantidad=0;
            cout << "Ejercicio 05." << endl;
            cout << "---------------" << endl;
            cout<<"¿Qué producto compraste? ";
            cin >> nombreProducto;
            cout << endl<<"¿Cuánto de este producto compraste?";
            cin >> cantidad;
            cout<<endl<<"Y, ¿Cuánto vale este producto?";
            cin>>precio;
            subtotal = precio*cantidad;
            valorImpuesto = subtotal*impuesto;
            total = subtotal+valorImpuesto;
            cout<<"Subtotal: "<<subtotal<<endl;
            cout<<"Valor del Impuesto: "<<valorImpuesto<<endl;
            cout<<"Total: "<<total<<endl;
            break;
        }
        case 6: {
            int num1=0,num2=0,aux=0;
            cout << "Ejercicio 06." << endl;
            cout << "---------------" << endl;
            cout<<"Ingresa un número: ";
            cin >> num1;
            cout<<"Ingresa un segundo número: ";
            cin >> num2;
            cout << endl;
            cout<<"Primer número: "<<num1<<endl;
            cout<<"Segundo número: "<<num2<<endl;
            aux = num1;
            num1 = num2;
            num2 = aux;
            cout<<"Número 1 intercambiado: "<<num1<<endl;
            cout<<"Número 2 intercambiado: "<<num2<<endl;
            break;
        }
        case 7: {
            int numUsuario=0;
            cout << "Ejercicio 07." << endl;
            cout << "---------------" << endl;
            cout<<"Ingresa un numero: ";
            cin >> numUsuario;
            cout << endl;
            if (numUsuario <0) {
                cout<<"El número "<<numUsuario<<" es negativo"<<endl;
            }else if (numUsuario >0) {
                cout<<"El número "<<numUsuario<<" es positivo"<<endl;
            }else
                cout<<"Tu número es el 0";
            break;
        }
        default: {
            cout <<"Número del ejercicio no válido";
            break;
        }
    }
    return 0;
}
