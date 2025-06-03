
// Andrea Viridiana Avalos Quiroz 37A ISC

#include <conio.h>
#include <stdio.h>

int main()
{
    int Arreglo[10];
    int Top;
    printf("Ordenador de numeros");
    printf("Ingresa 10 numeros al azar");
    for(int i=0; i<10;i++)
    { 
        printf("ingresa el numero: ");
         scanf("%d", &Arreglo[i]);

    }
    for(int i=0; i<10; i++){
   for(int j=i+1; j<10; j++){
     if(Arreglo[i]>Arreglo[j]){
     Top=Arreglo[i];
     Arreglo[i]=Arreglo[j];
     Arreglo[j]=Top;
     }
     }
    }
    printf("el arreglo ordenado: ");
    for(int i=0; i<10;i++){
        
        printf("%d", Arreglo[i]);
        
        
        
        
    }
}
