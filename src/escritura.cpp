#include "escritura.h"
#include <fstream>
#include "iostream"

using namespace std;

void grabarProgreso(Tablero t){

	std::ofstream archivo;
	archivo.open("Estado_Tablero.txt", ios::out | ios::app);


	archivo<<t.casillero1<<t.casillero2<<t.casillero3<<std::endl;

	archivo<<t.casillero4<<t.casillero5<<t.casillero6<<std::endl;

	archivo<<t.casillero7<<t.casillero8<<t.casillero9<<std::endl;

	archivo<<"----------------------------------------------------------------------------"<<endl;

	archivo.close();
	return;
}
