# include "arreglo.h"
#include "computadora.h"

int main (){
    ArregloDinamico<Computadora> Computadoras;

    Computadora comp01("Ubuntu", "DELL", "Modelo 1", "Intel core i3", 4);
    Computadora comp02("Ubuntu", "DELL", "Modelo 2", "Intel core i3", 4);
    Computadora comp03("Ubuntu", "DELL", "Modelo 3", "Intel core i3", 4);

    Computadoras <<comp01 <<comp02 <<comp03;

    Computadora comp04("Ubuntu", "DELL", "Modelo 2", "Intel core i3", 4);

    Computadora *ptr;
    ptr=Computadoras.buscar(comp04);

    if(ptr!=nullptr){
        cout <<endl <<"Información encontrada";
        cout <<*ptr <<endl;
    }
    else{
        cout<<endl <<"No se ha encotnrado nada";
    }


    cout <<endl <<endl;
    return 0;
}