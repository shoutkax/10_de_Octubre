# include <iostream>
# include <windows.h>
using namespace std;

static int contador=0, opcionUser;
static void aumentarContador() {
    contador++;
}
static void mostrarContador() {
    cout<<"El contador ahora tiene un valor de: "<<contador<<endl;
}
static void salir() {
    cout<<"Saliendo del programa..."<<endl;
}
static void mostrarMenu() {
    do {
        cout<<"1. Aumentar el contador"<<endl;
        cout<<"2. Mostrar el contador"<<endl;
        cout<<"3. Salir"<<endl;
        cin>>opcionUser;
        if (opcionUser==1) {
            aumentarContador();
            cout<<"Contador aumentado en 1"<<endl;
        }else if (opcionUser==2) {
            mostrarContador();
        }else if (opcionUser==3) {
            salir();
        }else {
            cout<<"Opcion no valida"<<endl;
            cout<<"Intenta nuevamente"<<endl;
        }
    }while (opcionUser!=3);
}

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Bienvenido al programa"<<endl<<"Selecciona una opcion:"<<endl;
    mostrarMenu();
    return 0;
}