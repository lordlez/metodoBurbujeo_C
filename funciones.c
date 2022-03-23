#include "header.h"

void ordenBurbujeo(int vector[], int cant){
    int i, j, aux;
    for(i = 0; i < cant; i++){
        for(j = 0; j < cant; j++){
            if(vector[j] > vector[j+1]){
                aux = vector[j+1];
                vector[j+1] = vector[j];
                vector[j] = aux;
            }
        }
    }
}

void mostrarVector(int vector[], int cant){
    int i;
    for(i = 0; i < cant; i++){
        printf("%d ", vector[i]);
    }
}
