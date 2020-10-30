#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>

using namespace std;

class Personaje
{
    private:
        string nombre;
        string tipo;
        float fuerza;
        int salud;
    public:
        Personaje();
        Personaje(const string &nombre, const string &tipo,float fuerza,int salud);
        void setNombre(const string &v);
        string getNombre();
        void setTipo(const string &v);
        string getTipo();
        void setFuerza(float v);
        float getFuerza();
        void setSalud(int v);
        int getSalud();
        friend istream& operator>>(istream &in, Personaje &obj){
            cout <<endl <<"Nombre: ";
            getline(cin,obj.nombre);
            cout <<endl <<"Tipo: ";
            getline(cin, obj.tipo);
            cout <<endl <<"Fuerza: ";
            cin >>obj.fuerza;
            cout <<endl <<"Salud: ";
            cin >>obj.salud;
            return in;
        }
        friend ostream& operator<<(ostream &on, Personaje &obj){
            cout <<endl <<"Nombre: " <<obj.getNombre();
            cout <<endl <<"Tipo: " <<obj.getTipo();
            cout <<endl <<"Fuerza: " <<obj.getFuerza();
            cout <<endl <<"Salud: " <<obj.getSalud();
            return on;
        }
        /*
        bool operator == (const Personaje &obj){

            return nombre==obj.nombre;
        }*/
        bool operator == (const Personaje &obj) const{

            return nombre==obj.nombre;
        }
}; 

#endif