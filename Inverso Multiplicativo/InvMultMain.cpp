#include <iostream>
#include "Matematica.h"

using namespace std;

int a, b;

int main() {
	cout << "Ingrese el valor del que desea hallar el inverso: "; 
	cin >> a;
	cout << "Ingrese el n del Zn al que el numero pertenece: ";
	cin >> b;

	if (a > b) {
		cout << "Error: El elemento A no pertenece al conjunto. Terminando programa." << endl;
		return 0;
	}

	if (mcd(a, b) != 1) {
		cout << "El elemento no tiene inversa multiplicativa. Terminando programa." << endl;
		return 0;
	}

	int x = euclidesExt(a, b);
	cout << "El inverso multiplicativo de " << a <<" en Z" << b << " es: " << x <<endl;

}