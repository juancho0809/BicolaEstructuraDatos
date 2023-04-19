#include <iostream>
#include "bicolaej.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	bicola<int> bicola;
	
	bicola.insertar_bicola(3,'I');
	bicola.insertar_bicola(8,'D');
	bicola.insertar_bicola(10,'I');
	bicola.atenderCola('D');
	bicola.insertar_bicola(12,'D');
	bicola.atenderCola('I');
	bicola.insertar_bicola(7,'I');
	bicola.ImprimirCola();
	
	return 0;
}


