#include <stdio.h>

int main(){
    int numero=12;
    int *punt;
    punt = &numero;
    printf("Hola mundo");

    printf("\nEl contenido del puntero es: %d", punt); //contenido del punt direccion de memoria de num
    printf("\nLa direccion de memoria almacenada por el puntero: %d",punt);
    printf("\nLa direccion de memoria de la variable: %d",&numero);
    printf("\n Direccion de memoria del puntero: %p",&punt);
    printf("\nEl tamanio de la memoria usado es: %d", sizeof(punt));
    return 0;
}