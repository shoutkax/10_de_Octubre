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
            // Pide N, validado entre 1 y 50 con un ciclo que repita
            // hasta que sea correcto, y muestra los números del 1 al N.
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
            //  Pide un número de 1 a 12 y muestra su
            //  tabla de multiplicar con el formato 5 x 3 = 15
            int numUsuario=0;
            cout << "Ejercicio 15." << endl;
            cout << "---------------" << endl;
            cout << "Ingresa un numero entre 1 y 12: ";
            cin >> numUsuario;
            while (numUsuario < 1 || numUsuario > 12) {
                cout<<"Número inválido, debe ser entre 1 y 12, ingresa otro número: ";
                cin >>numUsuario;
            }
            for (int i=1; i<11; i++) {
                cout <<numUsuario<<" x "<<i<<" = "<<numUsuario*i<<endl;
            }
            break;
        }
        case 16: {
            // Pide N y muestra la suma de los enteros de 1 a N y,
            // por separado, la de los pares.
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
            //  Pide números hasta que el usuario escriba 0.
            //  Al final muestra cuántos ingresó, su suma y su promedio.
            //  Si no ingresó ninguno, muestra un mensaje en lugar de dividir entre cero
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
                double promedio=suma/numerosIngresados;
                cout<<"Suma de tus números: "<<suma<<endl;
                cout<<"El promedio de tus números: "<<promedio<<endl;
                cout<<"Ingresaste "<<numerosIngresados<<" números"<<endl;
            }else
                cout<<"No ingresaste ningún número y cerraste el programa."<<endl;
        break;
        }
        case 18: {
            // Pide un entero positivo y muestra cuántos dígitos tiene y cuánto suman,
            // sin arreglos
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
            // Pide un entero positivo y muestra sus dígitos invertidos (123 queda 321).
            int numUsuario=0, numInvertido=0;
            cout<<"Ejercicio 19." << endl;
            cout << "---------------" << endl;
            cout << "Ingresa un numero positivo: ";
            cin >> numUsuario;
            while (numUsuario !=0) {
                numInvertido = (numInvertido*10)+(numUsuario%10);
                numUsuario = numUsuario/10;
            }
            cout << "El nuevo número (invertido) es: "<<numInvertido<<endl;
            break;
        }
        case 20: {
            // Indica si un número es primo. Prueba con 1, 2, 17 y 21.
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
                cout<<"Debe ser un número mayor a 1"<<endl;
            break;
        }
        case 21: {
            // Calcula el factorial de N (0 a 12, validado).
            // Explica en un comentario por qué el límite es 12.
            int numUsuario=0, acumuladorFactorial=1;
            cout << "Ejercicio 21." << endl;
            cout << "---------------" << endl;
            cout << "Ingresa un numero de 0 a 12: ";
            cin >> numUsuario;
            if (numUsuario==0) {
                cout<<"El factorial de 0 es 1";
            }
            else if (numUsuario>12) {
                cout<<"El límite factorial para este programa es de 12."<<endl;
            }else{
                while (numUsuario !=0) {
                    acumuladorFactorial = acumuladorFactorial*numUsuario;
                    numUsuario = numUsuario-1;
                }
                cout<<"El acumulado factorial es de: "<<acumuladorFactorial<<endl;
            }
            break;
        }
        case 22: {
            // Pide una altura de 1 a 9 y dibuja un triángulo de asteriscos de esa altura.
            int numUsuario=0;
            cout << "Ejercicio 22." << endl;
            cout << "---------------" << endl;
            cout << "Ingresa un numero de 1 a 9: ";
            cin >> numUsuario;
            while (numUsuario <1 || numUsuario>9) {
                cout << "Altura inválida, intenta nuevamente de 1 a 9: ";
                cin >> numUsuario;
            }
            for (int i=1; i<=numUsuario; i++) {
                for (int j=1; j<=i; j++) {
                    cout<<"*";
                }
                cout <<endl;
            }
            break;
        }
        case 23: {
            // Adivina el número: el programa guarda un secreto (por ejemplo 37)
            // y el usuario tiene 7 intentos. Tras cada intento dice
            // «mayor» o «menor». Al terminar muestra si ganó y en cuántos intento
            int intentos=7,secreto=37,numUsuario=0;
            cout << "Ejercicio 23." << endl;
            cout << "---------------" << endl;
            cout << "Adivina un número de 1 a 50. Tienes 7 intentos.: ";
            while (numUsuario !=secreto && intentos>0) {
                cout<<"Ingresa un número: ";
                cin >> numUsuario;
                if (numUsuario==secreto) {
                    cout<<"Felicidades, ganaste el juego!"<<endl;
                }else {
                    intentos--;
                    if (intentos>0) {
                        cout<<"Número incorrecto, te quedan "<<intentos<<" intentos"<<endl;
                    } else {
                        cout <<"Ya no te quedan más intentos, perdiste"<<endl;
                    }
                }
            }
            break;
        }
        default:
            cout <<" \nOpción Inválida"<<endl;
            break;
    }
    return 0;
}
