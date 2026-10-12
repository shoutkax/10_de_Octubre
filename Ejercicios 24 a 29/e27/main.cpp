# include <iostream>
# include <windows.h>
# include <cstdlib>
# include <ctime>
using namespace std;
// E27. Convierte E23 a funciones: mostrarInstrucciones, jugarPartida y
// mostrarResultado. Pregunta «¿jugar otra vez?» con validación.



static void mostrarInstrucciones(){
    cout<<"Bienvenido. En este juego tendrás que adivinar un número aleatorio"
          " entre 1 y 50. Tienes 5 intentos. Los intentos no válidos no cuentan"
          <<endl<<endl;
}
static void jugarPartida() {
    int numAleatorio = rand()%50+1;
    int numUsuario=0, intentos=5, intentoUsuario=1;
    cout<<numAleatorio<<endl;
    cout<<"-----------------"<<endl;
    cout<<"Bienvenido al juego, tienes 5 intentos."<<endl;
    cout<<"-----------------"<<endl;
    while (numUsuario!=numAleatorio && intentos>0) {
        cout<<"Ingresa un número"<<endl;
        cin>>numUsuario;
        if (numUsuario == numAleatorio) {
            cout<<"Felicidades, ganaste el juego. Lo terminaste en: "
            <<intentoUsuario<<" intentos"<<endl;
        }else {
            intentos--;
            intentoUsuario++;
            if (numUsuario>numAleatorio && intentos>0) {
                cout<<"El número secreto es menor al que ingresaste."
                      "Te quedan "<<intentos<<" intentos"<<endl;
            }else if (intentos>0 && numUsuario<numAleatorio) {
                cout<<"El número secreto es mayor al que ingresaste."
                      "Te quedan "<<intentos<<" intentos"<<endl;
            }else {
                cout<<"Perdiste, ya no te quedan más intentos"<<endl;
            }
        }
    }
}
int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int opcionUser=0;
    srand(time(0)); //Esto es para el numero aleatorio, la seed
    mostrarInstrucciones();
    jugarPartida();

    cout<<"¿Quieres jugar otra vez?"<<endl<<
        "1. Si"<<endl<<
        "2. No"<<endl;
    cin>>opcionUser;
    if (opcionUser==1 || opcionUser==2) {
        while (opcionUser!=2) {
            jugarPartida();
            cout<<"¿Quieres jugar otra vez?"<<endl<<
            "1. Si"<<endl<<
            "2. No"<<endl;
            cin>>opcionUser;
        }
    }else {
        cout<<"Opción no válida"<<endl;
    }

    return 0;
}