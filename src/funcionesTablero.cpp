#include "funcionesTablero.h"

int cambioValido(int posicion, int posicionCambio, int ficha, Tablero t){ //valida si el cambio que se quiere hacer esta permitido
	int cambio=0;

	switch(posicion){
		case 0:
			cambio = 1;
			break;
		case 1:
			if((posicionCambio == 2) || (posicionCambio == 4)){
				cambio = 1;
			};
			break;
		case 2:
			if((posicionCambio == 1) || (posicionCambio == 3) || (posicionCambio == 5)){
				cambio = 1;
			};
			break;

		case 3:
			if((posicionCambio == 6) || (posicionCambio == 2)){
				cambio = 1;
			};
			break;

		case 4:
			if((posicionCambio == 1) || (posicionCambio == 5) || (posicionCambio == 7)){
				cambio = 1;
			};
			break;

		case 5:
			if ((posicionCambio == 6) || (posicionCambio == 4) || (posicionCambio == 2) || (posicionCambio == 8)){
				cambio = 1;
			};
			break;
		case 6:
			if ((posicionCambio == 3) || (posicionCambio == 5) ||(posicionCambio == 9)){
				cambio = 1;
			};
			break;

		case 7:
			if ((posicionCambio == 4) || (posicionCambio == 8)){
				cambio = 1;
			};
			break;
		case 8:
			if ((posicionCambio == 7) || (posicionCambio == 5) || (posicionCambio == 9)){
				cambio = 1;
			};
			break;
		case 9:
			if ((posicionCambio == 6) || (posicionCambio == 8)){
				cambio = 1;
			};
			break;

	};


	return cambio;
}


void vaciarPosicion(int posicion, Tablero &t, char ficha){
	switch(posicion){
	 case 1:
		 if (t.casillero1 == ficha){
		     t.casillero1 = ' ';
		 }else{
			 std::cout<<"Movimiento invalido!"<<std::endl;
		 };
		 break;
	 case 2:
		 if (t.casillero2 == ficha){
			 t.casillero2 = ' ';
		 }else{
			 std::cout<<"Movimiento invalido!"<<std::endl;
		 };
		 break;

	 case 3:
	 	if (t.casillero3 == ficha){
	 		t.casillero3 = ' ';
	 	}else{
			 std::cout<<"Movimiento invalido!"<<std::endl;
		 };
	 	break;

	 case 4:
	 	if (t.casillero4 == ficha){
	 		t.casillero4 = ' ';
	 	}else{
			 std::cout<<"Movimiento invalido!"<<std::endl;
		 };
	 	break;

	 case 5:
	 	if (t.casillero5 == ficha){
	 		 t.casillero5 = ' ';
	 	}else{
			 std::cout<<"Movimiento invalido!"<<std::endl;
		 };
	 	break;

	 case 6:
	 	if (t.casillero6 == ficha){
	 		t.casillero6 = ' ';
	 	}else{
			 std::cout<<"Movimiento invalido!"<<std::endl;
		 };
	 	break;

	 case 7:
	 	if (t.casillero7 == ficha){
	 		 t.casillero7 = ' ';
	 	}else{
			 std::cout<<"Movimiento invalido!"<<std::endl;
		 };
	 	break;

	 case 8:
	 	if (t.casillero8 == ficha){
	 		 t.casillero8 = ' ';
	 	}else{
			 std::cout<<"Movimiento invalido!"<<std::endl;
		 };
	 	break;
	 case 9:
	 	if (t.casillero9 == ficha){
	 		 t.casillero9 = ' ';
	 	}else{
			 std::cout<<"Movimiento invalido!"<<std::endl;
		 };
	 	break;

	};
}


int hayTateti(Tablero t){
	int condicion = 0;

	if ((t.casillero1 != ' ') && (t.casillero1 == t.casillero2) && (t.casillero2 == t.casillero3)){
		condicion = 1;

	}else if ((t.casillero4 != ' ') && (t.casillero4 == t.casillero5) && (t.casillero5 == t.casillero6)){
		condicion = 1;

	}else if ((t.casillero7 != ' ') && (t.casillero7 == t.casillero8) && (t.casillero8 == t.casillero9)){
		condicion = 1;

	}else if ((t.casillero1 != ' ') && (t.casillero1 == t.casillero5) && (t.casillero5 == t.casillero9)){
		condicion = 1;

	}else if ((t.casillero3 != ' ') && (t.casillero3 == t.casillero5) && (t.casillero5 == t.casillero7)){
		condicion = 1;

	}else if ((t.casillero1 != ' ') && (t.casillero1 == t.casillero4) && (t.casillero4 == t.casillero7)){
		condicion = 1;

	}else if ((t.casillero2 != ' ') && (t.casillero2 == t.casillero5) && (t.casillero5 == t.casillero8)){
		condicion = 1;

	}else if ((t.casillero3 != ' ') && (t.casillero3 == t.casillero6) && (t.casillero6 == t.casillero9)){
		condicion = 1;}

	return condicion;
}



void agregarAlTablero(int posicion, Tablero &t, char ficha, int &contador){

	switch(posicion){
		case 0:
			contador = 8;
			break;

		case 1:
			if(t.casillero1 == ' '){
				t.casillero1 = ficha;
			}else{
				std::cout<<"Casillero no disponible!"<<std::endl;
			};
			break;

		case 2:
			if(t.casillero2 == ' '){
				t.casillero2 = ficha;
			}else{
				std::cout<<"Casillero no disponible!"<<std::endl;
			};
			break;

		case 3:
			if(t.casillero3 == ' '){
				t.casillero3 = ficha;
			}else{
				std::cout<<"Casillero no disponible!"<<std::endl;
			};
			break;

		case 4:
			if(t.casillero4 == ' '){
				t.casillero4 = ficha;
			}else{
				std::cout<<"Casillero no disponible!"<<std::endl;
			};
			break;

		case 5:
			if(t.casillero5 == ' '){
				t.casillero5 = ficha;
			}else{
				std::cout<<"Casillero no disponible!"<<std::endl;
			};
			break;

		case 6:
			if(t.casillero6 == ' '){
				t.casillero6 = ficha;
			}else{
				std::cout<<"Casillero no disponible!"<<std::endl;
			};
			break;

		case 7:
			if(t.casillero7 == ' '){
				t.casillero7 = ficha;
			}else{
				std::cout<<"Casillero no disponible!"<<std::endl;
			};
			break;

		case 8:
			if(t.casillero8 == ' '){
				t.casillero8 = ficha;
			}else{
				std::cout<<"Casillero no disponible!"<<std::endl;
			};
			break;

		case 9:
			if(t.casillero9 == ' '){
				t.casillero9 = ficha;
			}else{
				std::cout<<"Casillero no disponible!"<<std::endl;
			};
			break;

		default:
			std::cout<<"Atencion! Solo numeros del 1 al 9."<<std::endl;
			break;

	};
	return;

}


void modificarTablero(Tablero &t, int posicionAnterior, int posicionCambio, char ficha, int &contador){
	validarMovimiento(t, posicionAnterior, posicionCambio,ficha, contador);
	return;}


void validarMovimiento(Tablero &t, int posicionAnterior, int posicionCambio, char ficha, int &contador){

	int cambio = cambioValido(posicionCambio, posicionAnterior, ficha, t);

	if (cambio == 1){
		vaciarPosicion(posicionAnterior, t, ficha);
		agregarAlTablero(posicionCambio, t, ficha, contador);

	}else{
		std::cout<<"Movimiento no valido!\n\n";
	};

	return;}

void imprimirTabla(Tablero t){

	std::cout<<"\n "<<t.casillero1<<" | "<<t.casillero2<<" | "<< t.casillero3<<"         1 | 2 | 3 "<<std::endl;
	std::cout<<"---|---|---"<<"       ---|---|---"<<std::endl;
	std::cout<<" " << t.casillero4<<" | "<<t.casillero5<<" | " << t.casillero6 <<"         4 | 5 | 6 "<< "  POSICIONES DEL TABLERO"<<std::endl;
	std::cout<<"---|---|---"<<"       ---|---|---"<<std::endl;
	std::cout<<" "<<t.casillero7<<" | "<<t.casillero8<<" | "<<t.casillero9<<"         7 | 8 | 9 \n\n"<<std::endl;

	return;
}


void inicializarTablero(Tablero &t){
	t.casillero1 = ' ';
	t.casillero2 = ' ';
	t.casillero3 = ' ';
	t.casillero4 = ' ';
	t.casillero5 = ' ';
	t.casillero6 = ' ';
	t.casillero7 = ' ';
	t.casillero8 = ' ';
	t.casillero9 = ' ';
	return;
}


