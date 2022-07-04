
#include "funciones.h"


void titulo(){
	std::cout<<"      TA-TE-TI\n\n"<<std::endl;
}


int turno(int jugador){
	int turno;
	int aux = jugador%2;

	if (aux == 1){
		turno = 1;
	}else {
		turno = 2;
	}
	return turno;
}

char ficha(int jugador){
	char aux;
	if (jugador == 1){
		aux = 'X';
	}else {
		aux = 'O';
	}
	return aux;
}

bool validarPosicion(int num){
	bool condicion = false;
	if((num>=0)&&(num<=9)){
		condicion = true;
	};
	return condicion;
}


int pedirPosicion(){
	int num;
	while(true){
		std::cout<<"Ingrese posicion: "<<std::endl;
		std::cin>> num;
		if (validarPosicion(num)){
			return num;
		}else{ std::cout<<"Ingreso Invalido, vuelva a intentar.\n"<<std::endl;
		};
	};

}

void finJuego(int ganador, int contador, int turno){
	if(ganador == 1){
		std::cout<<"GANASTE!\n"<<std::endl;
		std::cout<<"Ganador: Jugador "<< turno <<std::endl;

	}else if(contador != 7){
		std::cout<<"EMPATE!\n"<<std::endl;
		std::cout<<"Fin del juego."<<std::endl;
	};
	return;
}
