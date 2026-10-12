# include <iostream>
# include <windows.h>
using namespace std;

static int varGlobal=0;
static void funcLocal() {
    int varLocal=0;
    varGlobal++;
    varLocal++;
    cout <<"Local: "<< varLocal << endl;
    cout <<"Global: "<< varGlobal << endl;
}
int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    funcLocal();
    funcLocal();
    funcLocal();
    funcLocal();
    cout <<"Una variable local puede ser modificada por funciones, "
           "y su valor termina siendo el nuevo dado por las operaciones"
           "de la función. Una variable local se crea en las funciones y "
           "deja de existir despues de que la función termina"<<endl;

    return 0;
}