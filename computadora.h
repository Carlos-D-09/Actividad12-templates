# ifndef COMPUTADORA_H
# define cOMPUTADORA_H

#include <iostream>
#include <iomanip>

using namespace std;

class Computadora
{
    private:
        //atributos
        string SystemOperative;
        string Company;
        string Model;
        string CPU;
        int RAM;
    public:
        //constructors
        Computadora();
        Computadora(const string &System, const string &Company, const string &Model, const string &Cpu, int value);
        //metodos
        void setSystem(const string &value);
        string getSystem()const;

        void setCompany(const string &value);
        string getCompany()const;

        void setModel(const string &value);
        string getModel()const;

        void setCpu(const string &value);
        string getCpu()const;
        
        void setRam(int value);
        int getRam()const;

        friend ostream& operator << (ostream& os, const Computadora &obj){
            os<<left;
            os<<endl<<setw(25)<<obj.getSystem()<<setw(24)<<obj.getModel()<<setw(24)<<obj.getCompany()<<setw(21)
              <<obj.getCpu()<<setw(20)<<obj.getRam();

            return os;
        }

        friend istream& operator >> (istream& is, Computadora &obj){
            
            cout<<endl<<"Sistema operativo del equipo: ";
            getline(cin, obj.SystemOperative);
            cout<<"Fabricante: ";
            getline(cin, obj.Company);
            cout<<"Procesador: ";
            getline(cin,obj.CPU);
            cout<<"Memoría RAM: ";
            is>>obj.RAM;
            cin.ignore();

            return is;
        }

        bool operator== (const Computadora &obj){
                return Model==obj.getModel();
        }
};

#endif