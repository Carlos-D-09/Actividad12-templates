# include "arreglo.h"
#include "Personaje.h"
int main (){ 
    ArregloDinamico<Personaje> Personajes;

    Personaje p01 ("ToadHunter9","Hunter", 45, 195 );
    Personaje p02 ("I Horuz L", "Warlock", 100, 196);
    Personaje p03 ("Tosaka p", "Come crayola", 100, 200);
    Personajes<<p01 <<p02 <<p03<<p03<<p03;

    Personaje p04("I Horuz L", "Warlock", 100, 196);
    Personaje p05 ("Tosaka", "Come crayola", 100, 200);

    Personaje *ptr = Personajes.buscar(p04);    //La busqueda devuelve la dirección de memoria
    if(ptr != nullptr){
        cout <<*ptr <<endl;
    }
    else{
        cout <<endl <<"No existe";
    }
    ArregloDinamico<Personaje*> ptrs = Personajes.buscarTodos(p05);
    if(ptrs.size() > 0){
        for (size_t x = 0; x < ptrs.size(); x++)
        {
            Personaje *p = ptrs[x];
            cout <<*p <<endl;
        }
    }
    else{
        cout <<"No existen coincidencias";
    }
    /*
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
    string *i = arreglo.buscar("cadena 1");
    cout<<endl <<i <<" " <<*i;
    *i = "Que pedo banda";
    arreglo.mostrar();
    cout<<endl <<i <<" " <<*i;
    */
    cout <<endl <<endl;
    return 0;
}