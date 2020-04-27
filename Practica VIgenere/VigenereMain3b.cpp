#include <iostream>
#include <string>
#include "Vigenere.h"

#define Alfabeto ("abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ,.")

using namespace std;
string mensaje;
string clave;

int main() {
	Vigenere v(Alfabeto);
	cout << "Ingrese el mensaje: ";
	getline(cin, mensaje);

	cout << "Ingrese la clave de cifrado: ";
	getline(cin, clave);
	string clave2 = clave;

	cout << endl; 
	cout << v.cifrar(clave,mensaje);
	cout << endl;
	cout << endl;
	cout << v.descifrar(clave,v.cifrar(clave2,mensaje));
}
