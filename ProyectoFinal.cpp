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
	string titulo; //Titulo del videojuego
	int year = 0; //Anio de publicacion
	string genero; //Genero del videojuego
	string clasificacion; //Clasificacion del videojuego
    string consola; //Unica consola en la esta disponible el videojuego
	string carac; //Caracteristicas del videojuego
	//string desc; //Descripcion del videojuego
	float uni = 0; //Precio unitario sin contar IVA ni el total
	float impuesto = 0; //La cantidad extra que se le suma al precio unitario
	float total = 0; //La suma del precio unitario con el impuesto
}vj[50];

void AgregarArticulo();
void ModificarArticulo();
void EliminarArticulo();
void Lista();
void ArchivoDeTextoLeer();
int menu();

//Programa principal
int main() {
	setlocale(LC_ALL, "Spanish");
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	ArchivoDeTextoLeer();
    bool ciclo = 1;

    do {
        int menuOpcion = menu();
        switch (menuOpcion) {
        case 1: {
            AgregarArticulo();
            break;
        }
        case 2: {
            ModificarArticulo;
            break;
        }
        case 3: {
            EliminarArticulo;
            break;
        }
        case 4: {
            Lista;
            break;
        }
        case 5: {
            ciclo = 0;
            break;
        }
        default: {
            cout << "Solo se puede ingresar un número que aparece en la pantalla" << endl;
        }
        }
    } while (ciclo == 1);

    system("pause");
    return 0;
}

//Codigo de las variables
void ArchivoDeTextoLeer() {
    ifstream leer;
    leer.open("ListaDeVideojuegos.txt", ios::in);
    int i = 0;
    int j = 0;

    string articuloLeer; //Numero de articulo
    string tituloLeer; //Titulo del videojuego
    string yearLeer; //Anio de publicacion
    string generoLeer; //Genero del videojuego
    string clasificacionLeer; //Clasificacion del videojuego
    string consolaLeer; //Unica consola en la esta disponible el videojuego
    string caracLeer; //Caracteristicas del videojuego
    //string descLeer; //Descripcion del videojuego
    string uniLeer; //Precio unitario sin contar IVA ni el total
    string impuestoLeer; //La cantidad extra que se le suma al precio unitario
    string totalLeer; //La suma del precio unitario con el impuesto

    if (leer.is_open()) {
        while (!leer.eof() && getline(leer, articuloLeer)) {
            (leer, vj[i].titulo);
            getline(leer, yearLeer);
            (leer, vj[i].genero);
            (leer, vj[i].clasificacion);
            (leer, vj[i].consola);
            (leer, vj[i].carac);
            //(leer, vj[i].desc);
            getline(leer, uniLeer);
            getline(leer, impuestoLeer);
            getline(leer, totalLeer);

            vj[i].articulo = stoi(articuloLeer.c_str());
            vj[i].year = stoi(yearLeer.c_str());
            vj[i].uni = stof(uniLeer.c_str(), nullptr);
            vj[i].impuesto = stof(impuestoLeer.c_str(), nullptr);
            vj[i].total = stof(totalLeer.c_str(), nullptr);
            i++;
        }
    }
    else {
        cout << "Hubo un error al abrir el archivo" << endl;
        system("pause");
    }

    leer.close();
}

int menu() {
    system("cls");
    int input = 0;
    cout << "Ingrese el número de acuerdo a la opción que desea realizar" << endl;
    cout << "1. Agregar Artículo" << endl;
    cout << "2. Modificar Artículo" << endl;
    cout << "3. Eliminar Artículo" << endl;
    cout << "4. Mostrar lista de Artículos" << endl;
    cout << "5. Salir" << endl;
    cin >> input;
    return input;
}