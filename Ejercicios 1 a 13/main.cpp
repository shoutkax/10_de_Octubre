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
            // Pide tu nombre (una palabra) y tu edad. Muestra:
            // «Hola NOMBRE, el próximo año tendrás X años»
            string nombre;
            int edad;
            cout << "Ejercicio 01." << endl;
            cout << "---------------" << endl;
            cout << "¿Cuál es tu nombre?";
            cin >> nombre;
            cout << "¿Cuántos años tienes?";
            cin >> edad;
            cout <<"Hola "<<nombre<<", el próximo año tendrás "<<edad+1<<" años"<<endl;
            break;
        }
        case 2: {
            // Pide dos enteros y muestra suma, resta, producto, división entera y residuo.
            // Antes de ejecutar, predice a mano el resultado con 17 y 5, y con 7 y 2.
            int num1=0, num2=0, suma=0, resta=0, division=0, residuo=0;
            cout << "Ejercicio 02." << endl;
            cout << "---------------" << endl;
            cout << "Ingresa el primer número: ";
            cin >> num1;
            cout << "Ingresa el segundo número: ";
            cin >> num2;
            cout << endl;
            if (num1 == 0 || num2 == 0) {
                suma = num1+num2;
                resta = num1-num2;
                cout<<"Suma: "<<suma<<endl;
                cout<<"Resta: "<<resta<<endl;
                cout <<"No se puede dividir por 0"<<endl;
            }else {
                suma = num1+num2;
                resta = num1-num2;
                division = num1/num2;
                residuo = num1%num2;
                cout<<"Suma: "<<suma<<endl;
                cout<<"Resta: "<<resta<<endl;
                cout<<"división: "<<division<<endl;
                cout<<"Residuo: "<<residuo<<endl;
            }
            break;
        }
        case 3: {
            //  Pide un número de 3 cifras (100 a 999) y
            //  muestra sus centenas, decenas y unidades usando solo / y %.
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
                int unidades = num%10;
                cout<<"Centenas: "<<centenas<<endl;
                cout<<"Decenas: "<<decenas<<endl;
                cout<<"Unidades: "<<unidades<<endl;
            }
            break;
        }
        case 4: {
            // Pide una cantidad de segundos y muéstrala como horas,
            // minutos y segundos. Prueba con 3725 (debe dar 1 h, 2 min, 5 s).
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
            // Pide el precio de un producto y la cantidad comprada.
            // Calcula subtotal, IVA del 19 % y total, con dos decimales
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
            // Pide dos números e intercámbialos usando una variable auxiliar.
            // Muestra los valores antes y después
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
            // Pide un entero e indica si es positivo, negativo o cero.
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
        case 8: {
            // Indica si un entero es par o impar, y si además es múltiplo de 5
            int numUsuario=0;
            cout << "Ejercicio 08." << endl;
            cout << "---------------" << endl;
            cout<<"Ingresa un numero: ";
            cin >> numUsuario;
            cout << endl;
            if (numUsuario ==0){
                cout<<"Tu número es el 0"<<endl;
            }else if ((numUsuario%2)==0 && (numUsuario%5)==0) {
                cout<<"El número "<<numUsuario<<" es par, y es múltiplo de 5";
            }else if ((numUsuario%2)==0 && (numUsuario%5)!=0) {
                cout<<"El número "<<numUsuario<<" es par, pero no es múltiplo de 5";
            }else if ((numUsuario%2)!=0 && (numUsuario%5)==0) {
                cout<<"El número "<<numUsuario<<" no es par, pero es múltiplo de 5";
            }else
                cout<<"El número "<<numUsuario<<" no es par ni múltiplo de 5";
            break;
        }
        case 9: {
            // Pide tres números distintos y muestra el mayor, sin usar arreglos.
            int num1=0,num2=0,num3=0;
            cout << "Ejercicio 09." << endl;
            cout << "---------------" << endl;
            cout<<"Ingresa tres números, uno seguido de otro: "<<endl;
            cin>>num1;
            cin>>num2;
            cin>>num3;
            if (num1>num2 && num1>num3) {
                cout<<num1<<" es el número mayor"<<endl;
            }else if (num2>num3 && num2>num1) {
                cout<<num2<<" es el número mayor"<<endl;
            }else if (num3>num1 && num3>num2) {
                cout<<num3<<" es el número mayor"<<endl;
            }else
                cout<<"Los tres números son iguales";
            break;
        }
        case 10: {
            //  Pide un año e indica si es bisiesto
            //  (divisible por 4, excepto los divisibles por 100 que no lo son por 400).
            //  Prueba 1900, 2000, 2023 y 2024.
            int fecha=0;
            cout << "Ejercicio 10." << endl;
            cout << "---------------" << endl;
            cout<<"Ingresa un año: ";
            cin >> fecha;
            cout << endl;
            if ((fecha%4)==0&&(fecha%100)!=0||(fecha%400)==0) {
                cout<<fecha<<" es un año bisiesto"<<endl;
            }else
                cout<<fecha<<" no es un año bisiesto"<<endl;
            break;
        }
        case 11: {
            //  Pide una nota de 0.0 a 5.0 y muestra la categoría:
            //  reprobado (menor a 3.0), aceptable (3.0a 3.9), bueno (4.0 a 4.5)
            //  o excelente (mayor a 4.5). Fuera de rango, muestra un mensaje de error
            float nota=0;
            cout << "Ejercicio 11." << endl;
            cout << "---------------" << endl;
            cout<<"Ingresa una nota: ";
            cin >> nota;
            cout << endl;
            if ((nota>=0) && (nota<3)) {
                cout<<"Sacaste "<<nota<<" reprobaste"<<endl;
            }else if (nota>=3 && nota<4) {
                cout<<"Sacaste "<<nota<<" calificación: aceptable"<<endl;
            }else if (nota>=4 && nota<4.6) {
                cout<<"Sacaste "<<nota<<" calificación: bueno"<<endl;
            }else if (nota>=4.5 && nota<=5) {
                cout<<"Sacaste "<<nota<<" calificación: excelente"<<endl;
            }else
                cout<<"Número fuera de rango, la nota debe ser de 0 a 5";
            break;
        }
        case 12: {
            // Calculadora: pide dos números y un operador (+, -, *, /).
            // Usa switch. Controla la división entre cero y el operador inválido.
            float num1=0,num2=0, sum=0,res=0,div=0,mult=0;
            int eleccion=0;
            cout << "Ejercicio 12." << endl;
            cout << "---------------" << endl;
            cout<<"Ingresa un numero: ";
            cin >> num1;
            cout<<endl<<"Ingresa otro numero: ";
            cin >> num2;
            cout<<"¿Qué deseas hacer con estos 2 números?\n1. Suma\n2. Resta\n3.Multiplicación\n4.División"<<endl;
            cin>>eleccion;
            switch (eleccion) {
                case 1: {
                    sum=num1+num2;
                    cout<<"La suma de los dos números es: "<<sum<<endl;
                    break;
                }
                case 2: {
                    res=num1-num2;
                    cout<<"La resta de los dos números es: "<<res<<endl;
                    break;
                }
                case 3: {
                    mult=num1*num2;
                    cout<<"La multiplicación de los dos números es: "<<mult<<endl;
                    break;
                }
                case 4: {
                    if (num2!=0) {
                        div=num1/num2;
                        cout<<"La división de los dos números es: "<<div<<endl;
                    } else
                        cout<<"No puedes dividir entre 0"<<endl;
                    break;
                }
                default: {
                    cout<<"Elección incorrecta, el programa terminará.";
                    break;
                }
            }
            break;
        }
        case 13: {
            // Pide hora (0 a 23) y minutos (0 a 59), rechazando valores fuera de rango,
            // e indica si esmañana (6:00 a 11:59), tarde (12:00 a 17:59)
            // o noche (18:00 a 5:59).

            int hora=0,minuto=0;
            cout << "Ejercicio 13." << endl;
            cout << "---------------" << endl;
            cout<<"Ingresa la hora: ";
            cin >> hora;
            cout<<endl<<"Ingresa los minutos: ";
            cin >> minuto;
            cout<<endl;
            if ((hora<0||hora>23)||(minuto<0||minuto>59)) {
                cout<<"Has ingresado un valor fuera de rango" << endl;
            }else if ((hora>=6&&hora<12)) {
                cout<<"Es de mañana"<<endl;
            }else if ((hora>=12&&hora<18)) {
                cout<<"Es la tarde"<<endl;
            }else
                cout<<"Es la noche";
            break;
        }
        default: {
            cout <<"Número del ejercicio inválido";
            break;
        }
    }
    return 0;
    }
