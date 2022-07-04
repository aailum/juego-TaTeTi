#include "funcionJuego.h"
#include "escritura.h"


void juego(){
		int posicionElegida=1, ganador=0;
		int i=1, jugador=1, turnoJugador, posicionFichaCambiar;
		char fichaJugador;
		Tablero tabla;

		titulo();
		inicializarTablero(tabla);
		imprimirTabla(tabla);


		for(i=1; i<7; i++){
			turnoJugador = turno(jugador);
			fichaJugador = ficha(turnoJugador);

			std::cout<<"Turno del jugador: "<< turnoJugador <<"   -    Ficha: "<< fichaJugador<<"\n"<<std::endl;
			posicionElegida = pedirPosicion();
			agregarAlTablero(posicionElegida, tabla, fichaJugador, i);
			ganador = hayTateti(tabla);
			imprimirTabla(tabla);
			grabarProgreso(tabla);
			jugador++;


			if(i>4){//se pregunta si hay tateti despues de la 3er ficha del primer jugador
					if(ganador == 1){
					std::cout<<"GANASTE!\n"<<std::endl;
					std::cout<<"Gandor jugador: "<< turnoJugador <<std::endl;
					i = 7; //corta ciclo for
					};

				};

		};


		while((ganador != 1) && (i == 7)){    //si no hay ganador sigue el juego.
					turnoJugador = turno(jugador);
					fichaJugador = ficha(turnoJugador);


					std::cout<<"Las fichas solo se pueden mover a los casilleros siguientes, no se pueden hacer saltos.\n"<<std::endl;
					std::cout<<"Turno del jugador: "<< turnoJugador << "  -   Ficha: "<< fichaJugador <<"\n"<<std::endl;
					std::cout<<"Posicion de la ficha a cambiar."<<std::endl;
					posicionFichaCambiar = pedirPosicion(); //posicion de la ficha que se quiere cambiar
					std::cout<<"Posicion del cambio."<<std::endl;
					posicionElegida = pedirPosicion(); //posicion a la que se quiere cambiar la ficha

					modificarTablero(tabla, posicionFichaCambiar,posicionElegida,fichaJugador,i);
					ganador = hayTateti(tabla);
					imprimirTabla(tabla);
					grabarProgreso(tabla);
					jugador++;
				};


		finJuego(ganador, i, turnoJugador);




 return;
}
