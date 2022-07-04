
#ifndef FUNCIONESTABLERO_H_
#define FUNCIONESTABLERO_H_

#include <iostream>
#include "tablero.h"

/*Agrega a la tabla la ficha del jugador en lo posicion que eligio*/
void agregarAlTablero(int posicion, Tablero &t, char ficha, int &contador);


/*llama a funcion validar movimiento*/
void modificarTablero(Tablero &t, int posicionAnterior, int posicionCambio, char ficha, int &contador);


/*valida el cambio de posicion de una ficha. devuelve 0 si no se puede y 1 si se puede*/
void validarMovimiento(Tablero &t, int posicionAnterior, int posicionCambio, char ficha, int &contador);


/*Valida si hay tateti(1 si hay ganador,0 si no l hay)*/
int hayTateti(Tablero t);

/*Analiza los cambios que se quieren hacer. Devuelve 1 si esta permitido y 0 si no*/
int cambioValido(int posicion, int posicionCambio, int ficha,Tablero t);

/*Vacia el casillero donde estaba la ficha antes del cambio*/
void vaciarPosicion(int posicion, Tablero &t, char ficha);


/*Imprime la tabla y sus cambios*/
void imprimirTabla(Tablero t);


/*Inicializa la tabla. A cada casillero le da el valor de ' ' vacio*/
void inicializarTablero(Tablero &t);





#endif /* FUNCIONESTABLERO_H_ */
