#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int seleccionUsuario=0;

    cout <<"Bienvenido, selecciona un ejercicio del 14 al 23:" <<endl;
    cin >>seleccionUsuario;
    switch (seleccionUsuario) {
        case 14: {
            int num=0;
            cout << "Ejercicio 14." << endl;
            cout << "---------------" << endl;
            cout << "Ingresa un numero entre 1 y 50: ";
            cin >> num;
            while (num < 1 || num > 50) {
                cout << "Número inválido, debe ser entre 1 y 50, ingresa otro número: ";
                cin >>num;
            }
                for (int i=1; i<=num; i++) {
                    cout <<i<<"\n";
                }
            break;
        }
        case 15: {
            int numUsuario=0;
            cout << "Ejercicio 15." << endl;
            cout << "---------------" << endl;
            cout << "Ingresa un numero entre 1 y 12: ";
            cin >> numUsuario;
            while (numUsuario < 1 || numUsuario > 12) {
                cout<<"Número inválido, debe ser entre 1 y 12, ingresa otro número: ";
                cin >>numUsuario;
            }for (int i=1; i<10; i++) {
                cout <<numUsuario<<" x "<<i<<" = "<<numUsuario*i<<endl;
            }
            break;
        }
        case 16: {
            int numUsuario=0, sumaEntero=0, sumaPar=0;
            cout << "Ejercicio 16." << endl;
            cout << "---------------" << endl;
            cout << "Ingresa un numero: ";
            cin >> numUsuario;
            for (int i=1; i<=numUsuario; i++) {
                sumaEntero = sumaEntero+i;
                if (i%2==0) {
                    sumaPar = sumaPar+i;
                }
            }
            cout<<"Suma de los Enteros: "<<sumaEntero<<endl;
            cout<<"Suma de los Pares: "<<sumaPar<<endl;
            break;
        }
        case 17: {
            int numUsuario=0, suma=0, numerosIngresados=0;
            cout << "Ejercicio 17." << endl;
            cout << "---------------" << endl;
            cout << "Ingresa un numero, escribe 0 para terminar el programa: ";
            cin >> numUsuario;
            while (numUsuario !=0) {
                suma = suma+numUsuario;
                numerosIngresados++;
                cout<<"Ingresa otro número, presiona 0 para terminar el ciclo: "<<endl;
                cin>>numUsuario;
            }
            if (numerosIngresados!=0) {
                int promedio=suma/numerosIngresados;
                cout<<"Suma de tus números: "<<suma<<endl;
                cout<<"El promedio de tus números: "<<promedio<<endl;
                cout<<"Ingresaste "<<numerosIngresados<<" números"<<endl;
            }else
                cout<<"No ingresaste ningún número y cerraste el programa."<<endl;
        break;
        }
        case 18: {
            int numUsuario=0, suma=0, contador=0;
            cout << "Ejercicio 18." << endl;
            cout << "---------------" << endl;
            cout << "Ingresa un numero: ";
            cin >> numUsuario;
            while (numUsuario !=0) {
                suma = (numUsuario%10)+suma;
                numUsuario = numUsuario/10;
                contador++;
            }
            cout<<"Tu número tiene "<<contador<<" dígitos"<<endl;
            cout<<"La suma acumulada de los números es "<<suma<<endl;
        break;
        }
        case 19: {
            int numUsuario=0, numInvertido=0;
            cout<<"Ejercicio 19." << endl;
            cout << "---------------" << endl;
            cout << "Ingresa un numero positivo: ";
            cin >> numUsuario;
            while (numUsuario !=0) {
                numInvertido = (numInvertido*10)+(numUsuario%10);
                cout<<numInvertido<<endl;
                numUsuario = numUsuario/10;
            }
            cout << "El nuevo número (invertido) es: "<<numInvertido<<endl;
            break;
        }
        case 20: {
            int numUsuario=0, divisor=2;
            bool primo=true;
            cout << "Ejercicio 20." << endl;
            cout << "---------------" << endl;
            cout << "Ingresa un numero: ";
            cin >> numUsuario;
            if (numUsuario>1){
                while (primo==true  && divisor<numUsuario) {
                    if (numUsuario%divisor==0) {
                        primo=false;
                    }else divisor ++;
                }
                if (primo==true) {
                    cout<<numUsuario<<" es un número primo"<<endl;
                } else {
                    cout<<numUsuario<<" no es primo"<<endl;
                }
            }else
                cout<<"Debe ser un número mayor o igual a 1";
            break;
        }
        default:
            cout <<" \nOpción Inválida"<<endl;
            break;
    }
    return 0;
}
