#include <iostream>
#include <string>
#include "Cesar.h"

using namespace std;
string entrada;
int clave;
int selector;

int main() {
	cout << "Ingrese la frase que desea cifrar/descifrar: ";
	getline(cin, entrada);
	cout << "Ingrese la clave con la que desea cifrar/descifrar: ";
	cin >> clave;
	Cesar cifrado(entrada, clave);
	cout << "Desea cifrar o descifrar un mensaje?" << endl;
	cout << "Ingrese 1 para cifrar o 2 para descifrar: ";
	cin >> selector;
	if (selector == 1) {
		cifrado.cifrar();
		cifrado.descifrar();
	}
	else if (selector == 2) {
		cifrado.descifrar2();
	}
	else {
		cout << "Valor fuera de rango. Terminando programa.";
		return 0;
	}
}