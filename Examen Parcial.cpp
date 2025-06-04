#include<conio.h>
#include<stdio.h>

class Lavadora{
	private: 
	int tiempo;
	int estado;
	int plandelavado;
	
public: 
Lavadora(){
	tiempo=0;
	estado =0; //cero osea estado OFF
}
//metodo seleccionar modo de lavado
void idle(){
	
	printf("\nSeleciona el metodo de lavado: 1)Regular  2)Delicado  3)Superdelicado");
	scanf("%d", &plandelavado);
	switch(plandelavado){
		case 1: plandelavado=1; //plan regular
		break;
		case 2: plandelavado=2; //delicado
		break;
		case 3: plandelavado=3; //super delicado
		break;
	}
	
	
 } 
 
 void PrenderLavadora(){
 int opcion;

        do {
            printf("\nDeseas prender la lavadora? 1) SI   2) NO: ");
            scanf("%d", &opcion);
            while (getchar() != '\n');

            if (opcion == 1) {
                estado = 1;
                printf("La lavadora esta prendida, puedes lavar.\n");
            } else if (opcion == 2) {
                estado = 0;
                printf("La lavadora esta apagada, no puedes lavar.\n");
            } else {
                printf("Opcion invalida.\n");
            }

        } while (estado == 0);
    }

 
 
 
 
 void IniciarCiclo(){
 	int tiemporemojo;
 	int tiempoenjuage;

 		 if(plandelavado==1){
		  
 		printf("\nIniciando ciclo lavado REGULAR");
 	
            printf("\nSoak: Iniciando remojo...");
            for (int i = 30; i >0; i--) {
                printf("\n remojando restan %d minutos", i);
            }
            
            printf("\nRinse: enjuagando... ");
           for (int i = 30; i >0; i--) {
                printf("\n  enjuagando %d minutos", i);
            }
	
	
            printf("\nDrain: Iniciando drenado");
            printf("\n Dry: Secando la ropa");
            for (int i=5; i>0; i--){
            	printf("\n secando la ropa restan %d minutos", i);
			}
            printf("\n Su ropa esta lista");
            
       }
 		
 		 if(plandelavado==2){
 			printf("\nIniciando ciclo lavado DELICADO");
 		
		
            printf("\nSoak: Iniciando remojo...");
            for (int i = 30; i >0; i--) {
                printf("\n remojando restan %d minutos", i);
            }
            
             printf("\nRinse: enjuagando... ");
           for (int i = 30; i >0; i--) {
                printf("\n  enjuagando %d segundos", i);
            }
	
            printf("\nDrain: Iniciando drenado");
            printf("\n Su ropa esta lista");
            
            }
            
            else if(plandelavado==3){
			printf("\nIniciando ciclo lavado SUPER DELICADO");
 		
		
            printf("\nSoak: Iniciando remojo...");
            for (int i = 30; i > 0; i--) {
                printf("\n remojando restan %d minutos", i);
            }
            
             printf("\nRinse: enjuagando... ");
           for (int i = 30; i >0; i--) {
                printf("\n  enjuagando %d segundos", i);
            }
	
            printf("\nDrain: Iniciando drenado");
            printf("\n Su ropa esta lista");
            
            }
		
}
 	
 
	
	
};

int main() {
	 Lavadora miLavadora;
    int repetir;

    do {
        miLavadora.idle();             
        miLavadora.PrenderLavadora();  
        miLavadora.IniciarCiclo();     

        printf("\n\nQuieres volver a lavar? 1) SI  2) NO: ");
        scanf("%d", &repetir);
        while (getchar() != '\n');  

    } while (repetir == 1);

    return 0;
}
