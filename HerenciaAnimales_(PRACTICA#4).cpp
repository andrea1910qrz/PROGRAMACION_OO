#include<conio.h>
#include<stdio.h>

// Andrea Viridiana Avalos Quiroz 37A ISC
class DeporteconBalon {
 public:
 	void Balon(){
 		printf("\n todos los balones se inflan");
	 }
 	void Reglas(){
 		printf("\n los juegos con balon necesitan reglas");
	 }
	 void Cuerpo(){
	 	printf("\n para cada balon se necesita una parte del cuerpo");
	 }
};

class Pies : public DeporteconBalon {
	public:
	void soccer () {
  printf("\n el balon de soccer se controla con los pies");	}
};

class Manos : public DeporteconBalon{
	public:
	void Voleibol(){
		printf("\n el balon del voleibol se controla con las manos");
	}
	void Futbol(){
		printf("\n el balon del futbol se controla con las manos");
	}
	void Handball(){
		printf("\n  el balon del handball se controla con las manos");
	}
};

class Raqueta : public DeporteconBalon{
	public:
	void Tennis(){
		printf("\n el balon del tennis se controla con una raqueta");
	}
};


 int main(){
 	DeporteconBalon d;
    Pies p;
    Manos m;
    Raqueta r;
    
    
 printf("\n");
p.Cuerpo();
p.Reglas();
p.Balon();
p.soccer();


 printf("\n ");
m.Balon();
m.Cuerpo();
m.Reglas();
m.Futbol();
m.Handball();
m.Voleibol();

printf("\n ");
r.Balon();
r.Cuerpo();
r.Reglas();
r.Tennis();


 }
