# include "arreglo.h"
#include "computadora.h"

int main (){
    ArregloDinamico<Computadora> Computadoras;

    Computadora comp01("Ubunto 20.0", "Acer", "Modelo 1", "AMD Ryezen 3",8);
    Computadora comp02("Windows 10", "Asus", "Modelo 2", "Intel core i7", 16);
    Computadora comp03("Arch linux", "HP", "Modelo 3", "Intel pentium", 3);
    Computadora comp04("Windows 10", "Lenovo", "Modelo 4", "Intel core i3", 4);
    Computadora comp05("Windows 10", "DELL", "Modelo 5", "Intel core i3", 4);

    Computadoras <<comp01 <<comp02 <<comp03 <<comp04 <<comp05;

    Computadora comp06("Windows 10", "Toshiba", "modelo 0", "Intel core i5", 8);
    Computadora comp07("Fedora", "Samsung", "modelo 20", "AMD athlon", 8);

    Computadora *ptr;
    //Busqueda de computadoras existentes
    cout <<endl <<"Busqueda de una computadora que tenga por sistema operativo windows 10." <<endl;
    cout <<"Computadora que se quiere comparar: "<<endl<<endl;
    cout<<left;
    cout<<setw(25) <<"Sistema operativo"<<setw(24) <<"Marca"<<setw(21)<<"Modelo del equipo"
    <<setw(24) <<"Procesador"<<setw(20) <<"Memoria RAM";
    cout<<comp06;
    ptr=Computadoras.buscar(comp06);
    if(ptr!=nullptr){
        cout <<endl <<endl<<"Información encontrada en buscar: "<<endl<<endl;
        cout<<left;
        cout<<setw(25) <<"Sistema operativo"<<setw(24) <<"Marca"<<setw(21)<<"Modelo del equipo"
        <<setw(24) <<"Procesador"<<setw(20) <<"Memoria RAM";
        cout <<*ptr <<endl;
    }
    else{
        cout<<endl <<endl <<"No se ha encontrado nada en la operación buscar."<<endl;
    }
    //Busqueda de computadora no existente;
    cout << endl <<"Busqueda de una computadora que tenga por sistema operativo fedora" <<endl;
    cout <<"Computadora que se quiere comparar: "<<endl<<endl;
    cout<<left;
    cout<<setw(25) <<"Sistema operativo"<<setw(24) <<"Marca"<<setw(21)<<"Modelo del equipo"
    <<setw(24) <<"Procesador"<<setw(20) <<"Memoria RAM";
    cout<<comp07;
    ptr=Computadoras.buscar(comp07);
    if(ptr!=nullptr){
        cout <<endl <<endl <<"Información encontrada en buscar: "<<endl<<endl;
        cout<<left;
        cout<<setw(25) <<"Sistema pertivo"<<setw(24) <<"Marca"<<setw(21)<<"Modelo del equipo"
        <<setw(24) <<"Procesador"<<setw(20) <<"Memoria RAM";
        cout <<*ptr <<endl;
    }
    else{
        cout<<endl <<endl <<"No se ha encontrado nada en la operación buscar."<<endl;
    }

    ArregloDinamico<Computadora *> ptrs = Computadoras.buscar_todos(comp06);
    cout <<endl <<"Busqueda de las computadoras que tengan por sistema operativo windows 10." <<endl;
    cout <<"Computadora que se quiere comparar: "<<endl<<endl;
    cout<<left;
    cout<<setw(25) <<"Sistema operativo"<<setw(24) <<"Marca"<<setw(21)<<"Modelo del equipo"
    <<setw(24) <<"Procesador"<<setw(20) <<"Memoria RAM";
    cout <<comp06;
    if(ptrs.size()>0){
        cout <<endl <<endl <<"Información encontrada en buscar todos:" <<endl <<endl;
        cout<<left;
        cout<<setw(25) <<"Sistema operativo"<<setw(24) <<"Marca"<<setw(21)<<"Modelo del equipo"
        <<setw(24) <<"Procesador"<<setw(20) <<"Memoria RAM";
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            cout<<*ptrs[i];
        }
    }
    else{
        cout <<endl <<endl <<"No se ha encontrado nada en la operación buscar todos";
    }


    cout <<endl <<endl;
    return 0;
}