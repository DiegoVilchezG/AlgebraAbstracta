#include <iostream>
#include "Railfence.h"

using namespace std;

string mensaje, resultado;
int clave;

int main() {
	cout << "Ingrese la clave: ";
	cin >> clave;
	cin.ignore();
	Railfence rail(clave);
	cout << "Ingrese el mensaje: ";
	getline(cin, mensaje);
	string cifrado = rail.cifrar(mensaje);
	cout << "Mensaje cifrado: " << cifrado << endl;
	string descifrado = rail.descifrar(cifrado);
	cout << "Mensaje descifrado: " << descifrado << endl;
}