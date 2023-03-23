#include <stdio.h>

int calcularCuadrado(int num){
    return num*num;
};
void calcularCuadradoVoid(int num){
    printf("\nEl cuadrado del numero es: %d",num*num);
}

void direccionYContenido(int *punt){
    printf("\nLa direccion de mi variable es: %d",punt);
    printf("\nEl contenido de mi variable es: %d",*punt);
}
void invertir(int a , int b){
    int aux=b;
    b=a;
    a=aux;
    printf("\nEl valor de a es b: %d",a);
    printf("\nEl valor de b es a: %d",b);
}

void orden(int a,int b){
    if(a>b){
        int aux = a;
        a=b;
        b=aux;    
    }
     printf("\nEl menor valor es: %d y el mayor valor es: %d",a,b);

   
}



int main(){
    int direccionContenido = 10;
    int *punt;
    punt = &direccionContenido;
    int cuadrado = calcularCuadrado(2);
    printf("El cuadrado es: %d",cuadrado);
    calcularCuadradoVoid(3);
    direccionYContenido(punt);
    invertir(1,2);
    orden(40,30);
    printf("\n------ direccion de la variable ----\n la direccion de var es: %d",&direccionContenido);
    return 0;
}