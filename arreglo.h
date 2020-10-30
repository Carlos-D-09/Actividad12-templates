#ifndef ARREGLODINAMICO_H
#define ARREGLODINAMICO_H

#include <iostream>

using namespace std;

template <class T>
class ArregloDinamico{

    private:
        T *arreglo;
        const static int MAX = 1000;
        size_t cont;
        size_t tam;
        void expandir();
    public:
        ArregloDinamico();
        ~ArregloDinamico();
        void insertar_final (const T &value);
        void insertar_inicio (const T &value);
        void insertar(const T &value, size_t position);
        void eliminar_inicio ();
        void eliminar_final();
        void eliminar(size_t position);
        T* buscar(const T &obj);
        ArregloDinamico<T*> buscar_todos(const T &obj);

        friend ArregloDinamico<T>& operator<< (ArregloDinamico<T> &a, const T &obj){
            a.insertar_final(obj);
            return a;
        }
        T operator[] (size_t p){
            return arreglo[p];
        }
        size_t size();

};

template <class T>
ArregloDinamico<T>::ArregloDinamico(){

    arreglo = new T [MAX];
    cont = 0;
    tam=MAX;
}

template <class T>
ArregloDinamico<T>::~ArregloDinamico(){
    delete[] arreglo;
}

template <class T>
void ArregloDinamico<T>::insertar_inicio(const T &value){

    if(cont == tam){
        expandir();
    }
    for(size_t x = cont; x > 0; x--){
        arreglo[x] = arreglo[x-1];
    }
    arreglo[0] = value;
    cont++;
}

template <class T>
void ArregloDinamico<T>::insertar_final(const T &value){
    
    if(cont == tam){
        expandir();
    }
    arreglo[cont] = value;
    cont++;
}

template <class T>
void ArregloDinamico <T>::insertar(const T &value, size_t position){
    if(position>=cont){
        cout <<endl <<"Es una posición no valida"<< endl;
        return;
    }
    if(cont == tam){
        expandir();
    }
    else{
        for(size_t i = cont; i > position; i--){
            arreglo[i]=arreglo[i-1];
        }
        arreglo[position]=value;
        cont++;
    }
}

template<class T>
void ArregloDinamico<T>::eliminar_inicio (){
    if(cont == 0){
        cout<<endl <<"No hay nada para borrar" <<endl;
        return;
    }
    for(size_t i = 0;i < cont-1; i ++){
        arreglo[i]=arreglo[i+1];
    }
    cont--;
}

template<class T>
void ArregloDinamico<T>::eliminar_final (){
    if(cont == 0){
        cout<<endl <<"No hay nada para borrar" <<endl;
    }
    cont--;
}

template<class T>
void ArregloDinamico<T>::eliminar(size_t position){
    if(position>=cont){
        cout<<endl <<"Es una opción no valida" <<endl;
        return;
    }
    if(cont==tam){
        expandir();
    }
    for (position; position < cont-1; position++){
        arreglo[position]=arreglo[position+1];
    }
    cont--;
}

template <class T>
T* ArregloDinamico<T>::buscar (const T &obj){
    for (size_t i = 0; i < cont; i++)
    {
        if(arreglo[i]==obj){
            return &arreglo[i];
        }
    }
    return nullptr;
}

template <class T>
ArregloDinamico<T*> ArregloDinamico<T>::buscar_todos(const T &obj){
    ArregloDinamico<T*> ptrs;
    for (size_t i = 0; i < cont; i++)
    {
        if(arreglo[i]==obj){
            ptrs.insertar_final(&arreglo[i]);
        }
    }
    return ptrs;
}

template <class T>
size_t ArregloDinamico<T>::size(){
    return cont;
}

template <class T>
void ArregloDinamico<T>::expandir(){

    T *nuevo = new T [tam+MAX];
    tam=tam+MAX;
    for(size_t y = 0; y < cont; y++){
        nuevo[y]=arreglo[y];
    }
    delete[] arreglo;
    arreglo = nuevo;
}
#endif