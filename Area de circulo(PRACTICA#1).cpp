
#include<conio.h>
#include<stdio.h>
#include<math.h>

int Circulo(float radio, char opcion){
int resultado;
if (opcion=='p'){

resultado = 2*(3.1416)*radio;
}
else if(opcion=='a'){
resultado= (radio*radio)*3.1416 ;
}
return resultado;
}


int main(){
	float radio, resultado;
	char opcion;
	
	printf("Calcula area de circulo");
	printf("\nDame el radio del circulo: ");
	scanf("%f", &radio);
	
	 getchar();
	 
	printf("\nCalcular p o a: ");
	scanf("%c", &opcion);
	resultado=Circulo(radio,opcion);

	printf("\n El resultado es: %f",resultado);
}
