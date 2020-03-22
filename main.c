#include "C:\Users\Fuertes Alejandro\Documents\Codeblocks Projects\Unidad 1\Headers\funcionesVector.h"

void insertarDato(int pTamanio, int *pVector);

int main()
{
    int tamanio, nuevoDato;
    printf("\n  Ingrese el tama%co del vector : ",164);
    scanf("%d",&tamanio);

    int vector[tamanio];

    cargaVector(tamanio,vector);

    ordenarVectorAsc(tamanio,vector);
    muestraVector(tamanio,vector);

    printf("\n\n  El vector ha sido ordenado");
    printf("\n\n ------------------------------------\n");
    printf("\n  Inicio funci%cn 'INSERTARVECTOR'\n",162);

    insertarDato(tamanio,vector);

    printf("\n\n  Fin de la funci%cn 'INSERTARVECTOR'\n",162);
    printf("\n ------------------------------------\n");

    ordenarVectorAsc(tamanio, vector);
    muestraVector(tamanio, vector);

    printf("\n\n");

    return 0;
}

void insertarDato(int pTamanio, int *pVector){

    int nuevoDato;
    printf("\n  Inserte el nuevo dato que quiere cargar:     ");
    scanf("%d",&nuevoDato);

    *(pVector + (pTamanio - 1)) =  nuevoDato;
}
