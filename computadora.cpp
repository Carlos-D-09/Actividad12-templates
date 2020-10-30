#include "computadora.h"

Computadora::Computadora()
{

}
Computadora::Computadora(const string &SystemOperative, const string &Company,const string &Model, const string &Cpu, int RAM)
{
    this->SystemOperative=SystemOperative;
    this->Company=Company;
    this->Model=Model;
    this->CPU=Cpu;
    this->RAM=RAM;
}

void Computadora::setSystem(const string &value)
{
    SystemOperative=value;
}
void Computadora::setCompany(const string &value)
{
    Company=value;
}
void Computadora::setModel(const string &value)
{
    Model==value;
}
void Computadora::setCpu(const string &value)
{
    CPU=value;
}
void Computadora::setRam(int value)
{
    RAM=value;
}
string Computadora::getSystem() const
{
    return SystemOperative;
}
string Computadora::getCompany() const
{
    return Company;
}
string Computadora::getModel() const
{
    return Model;
}
string Computadora::getCpu() const
{
    return CPU;
}
int Computadora::getRam() const
{
    return RAM;
}

