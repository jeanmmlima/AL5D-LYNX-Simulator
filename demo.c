
#include <stdio.h>
#include "armc_simulator.h"

int main(){

	ufrn_header();

	int clientID = abre_porta();
	if(clientID  != -1){

  		printf("Servidor conectado!\n");

  		setup(clientID);
  		


    	// Enquanto a simulacao for ativa
    	while(simulacao_ativa(clientID)!=-1){


			envia_comando(clientID,"#0P1500#1P1500#2P1500#3P1500#4P1500");
			envia_comando(clientID,"#0P2500#1P1500#2P1500#3P2500#4P1400");
      printf("%i\n",BUFSIZE);
			

    	}

    	fecha_porta(clientID);


  	}
  	else {
  		printf("Servidor não foi conectado!\n");
  		return 0;
  	}


	
}