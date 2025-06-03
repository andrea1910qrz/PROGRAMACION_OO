#include<conio.h>
#include<stdio.h>
#include <fstream>//Esta libreria es para el manejo de archivos :)

 int main (){
	
	std::ifstream archivo("valor.txt");
	int valor;
	printf("\nLeer datos de otros archivos en C/C++");
	
	if(archivo.is_open()){
		archivo >> valor;  //Aqui es donde lees el valor desde el arrchivo
		archivo.close();
	
	
	printf("\nEl valor leido es: %d", valor);   
     }
     else { printf("\nNo se abre el archivo");
	 }
	 return 0;
}

