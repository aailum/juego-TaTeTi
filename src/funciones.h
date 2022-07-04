#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#include <iostream>

/*imprime el titulo del juego*/
void titulo();


/*se pide el ingreso de una posicion al usuario*/
int pedirPosicion();


/*devuelve el turno del jugador que le toca. puede ser 1 o 2. */
int turno(int jugador);

/*dvuelve la ficha que le corresponde al jugador*/
char ficha(int jugador);

/*valida si el numero de posicion ingresado esta entre 0 y 9*/
bool validarPosicion(int num);

/*imprime por pantalla si hay ganador o empate*/
void finJuego(int ganador, int contador, int turno);


#endif /* FUNCIONES_H_ */
