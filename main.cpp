# include "arreglo.h"

int main (){

    ArregloDinamico <int> arreglo;

    for (int i = 0; i < 10; i++){
        arreglo.insertar_final(i);
    }
    for (size_t i = 0; i < arreglo.size(); i++){
        cout<<arreglo[i]<<" ";
    }
    arreglo.insertar(25,1);
    cout<<endl << endl;
    for (size_t i = 0; i < arreglo.size(); i++){
        cout<<arreglo[i]<<" ";
    }
    arreglo.eliminar_inicio();
    cout<<endl <<endl;
    for (size_t i = 0; i < arreglo.size(); i++){
        cout<<arreglo[i]<<" ";
    }
    arreglo.eliminar_final();
    cout<<endl <<endl;
    for (size_t i = 0; i < arreglo.size(); i++){
        cout<<arreglo[i]<<" ";
    }
    arreglo.eliminar(0);
    cout<<endl <<endl;
    for (size_t i = 0; i < arreglo.size(); i++){
        cout<<arreglo[i]<<" ";
    }
    cout <<endl <<endl;
    return 0;
}