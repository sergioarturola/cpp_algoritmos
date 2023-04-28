#include<iostream>
using namespace std;

int main(){

    //array ordenado
    int lista[] = {1,2,3,4,5,6};

    //declarando variables
    int superior, inferior, dato, mitad, taman, contador = 0;
    bool encontrado = false;

    inferior = 0;
    superior = 6;

    taman = superior;
    dato = 5;

    mitad = (inferior+superior)/2;

    //algoritmo
    while(inferior <= superior && contador<taman){

        if(lista[mitad] == dato){

            encontrado = true;
            break;
        }

        if(dato > lista[mitad]){

            inferior = mitad;
            mitad = (inferior+superior)/2;
        }

        if(dato < lista[mitad]){
            superior = mitad;
            mitad = (inferior+superior)/2;
        }

        contador++;
    }

    //verificando si se encontro elemento

    if(encontrado){
        cout<<"Elemento encontrado en posicion: "<<mitad<<endl;
    }
    else{
        cout<<"El numero no esta en el arreglo"<<endl;
    }


}
