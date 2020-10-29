# include "arreglo.h"

int main (){

    ArregloDinamico <string> arreglo;

    arreglo.insertar_final("cadena 1");
    arreglo.insertar_final("cadena 2");
    arreglo.insertar_inicio("cadena 3");
    arreglo.insertar_inicio("cadena 4");
    cout<<endl<<"Elementos insertados hasta el momento:";
    arreglo.mostrar();

    arreglo.insertar("cadena 5", 2);
    cout<<endl<<"Insertamos el string: cadena 5, en la posición 2. Elementos hasta el momento:";
    arreglo.mostrar();

    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);
    cout<<endl<<"Los elementos que ya no estan fueron eliminados de la siguiente forma: el primer elemento del arreglo,"<<endl
        <<"luego el ultimo y al final el elemento que se situaba en la posicion 1. Elementos que restan: ";
    arreglo.mostrar();

    cout <<endl <<endl;
    return 0;
}