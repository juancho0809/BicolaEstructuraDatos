#include <cstdlib>
#include <iostream>

#ifndef COLA1_H     
#define COLA1_H 

using namespace std;

template<class T>
struct nodo{T dato;
        nodo<T> *sig, *ant;
       };
 

template<class T>
class bicola{nodo<T> *cab,*fin;
      public: bicola(){cab=fin=NULL;}
      void insertar_bicola(T dato, char posicion);
      void atenderCola(char posicion);
      void ImprimirCola();
      bool ColaVacia();
      
 };

template<class T>
void bicola<T>::insertar_bicola(T i, char posicion) {
    nodo<T> *nuevo = new nodo<T>;
    nuevo->dato = i;
    nuevo->sig = NULL;

    if (posicion == 'D') { // Inserción por la izquierda
        nuevo->ant = NULL;
        if (cab == NULL) { // La bicola está vacía
            cab = nuevo;
            fin = nuevo;
        } else { // La bicola no está vacía
            nuevo->sig = cab;
            cab->ant = nuevo;
            cab = nuevo;	
        }
    } else if (posicion == 'I') { // Inserción por la derecha
        nuevo->sig = NULL;
        if (cab == NULL) { // La bicola está vacía
            cab = nuevo;
            fin = nuevo;
        } else { // La bicola no está vacía
            nuevo->ant = fin;
            fin->sig = nuevo;
            fin = nuevo;
        }
    } 
}

template<class T>
void bicola<T>::atenderCola(char posicion){

	if(cab == NULL){
		
		return;
	}
	if(posicion == 'I'){
		nodo<T> *aux = cab;
		cab = cab->sig;
		delete aux;
	}
	else if(posicion == 'D'){
		nodo<T> *aux = fin;
		fin = fin->ant;
		fin->sig = NULL;
		delete aux;
	}
	
}


template<class T>
void bicola<T>::ImprimirCola(){
     nodo<T> *aux;
     aux=cab;
     while(aux!=NULL){
       cout<<aux->dato<<" ";
       aux=aux->sig;}    
}


template<class T>
bool bicola<T>::ColaVacia(){
     return (cab==NULL);
     }


#endif

