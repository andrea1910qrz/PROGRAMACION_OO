
#include<conio.h>
#include<stdio.h>
#include<math.h>

class Circulo {
public:
 float radio;
     
 float calcular (char opcion) {
    int resultado;
    if (opcion=='p'){
    resultado = 2*(3.1416)*radio;
    }
    else if(opcion=='a'){
    resultado= (radio*radio)*3.1416 ;
    }
    return resultado;
    }
};


int main() {
	Circulo objeto;
	char opcion;
	float  resultado;

	
	printf("Calcula area de circulo");
	printf("\nDame el radio del circulo: ");
	scanf("%f", & objeto.radio);
	
	 getchar();
	 
	printf("\n Calcular perimetro (p) o area (a): ");
	scanf("%c", & opcion);
	resultado=objeto.calcular(opcion);

	printf("\n El resultado es: %f",resultado);
}
