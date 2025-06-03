#include<stdio.h>
#include<conio.h>

main(){
	int num1, num2, opcion, resultado;
	
	printf("Calcula areas de diferentes triangulos");
	printf("\n 1. Triangulo Isoceles");
	printf("\n 2. Triangulo Escaleno");
	printf("\n 3. Triangulo Rectangulo");
	printf("\n 4. Triangulo Equilatero");
	printf("\n Que area quieres caluclar?: ");
	scanf("%d", &opcion);
	printf("\n Dame la altura: ");
	scanf("%d", &num1);
	printf("\n Dame la base: ");
	scanf("%d", &num2);
	
	resultado = (num1*num2)/2;
	
	switch(opcion){
		case 1: printf("Tu triangulo es isoceles");
	printf("\nSu area es: %d", resultado);
	break;
		case 2: printf("Tu triangulo es escaleno");
	printf("\nSu area es: %d", resultado);
	break;
		case 3: printf("Tu triangulo es rectangulo");
	printf("\nSu area es: %d", resultado);
	break;
		case 4: printf("Tu triangulo es equilatero");
	printf("\nSu area es: %d", resultado);
	break;
	getch();
	}
	
}
