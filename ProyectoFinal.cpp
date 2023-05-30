//Arreglos
#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
#include <fstream>
using namespace std;

//Declaracion de estructa y variables
struct videojuego {
	int articulo = 0; //Numero de articulo
	char titulo[30] = " "; //Titulo del videojuego
	int year = 0; //Anio de publicacion
	char genero[30] = " "; //Genero del videojuego
	char clasificacion[5] = " "; //Clasificacion del videojuego
	char consola[30] = " "; //Unica consola en la esta disponible el videojuego
	char carac[200] = " "; //Caracteristicas del videojuego
	//char desc[200] = " "; //Descripcion del videojuego
	float uni = 0; //Precio unitario sin contar IVA ni el total
	float impusto = 0; //La cantidad extra que se le suma al precio unitario
	float total = 0; //La suma del precio unitario con el impuesto
};