#include <iostream>
#include "Railfence.h"
#include <vector>
using namespace std;

Railfence::Railfence(int a) {
	clave = a;
}

string Railfence::cifrar(string a) {
	int count;
	do {
		count = a.find(' ');
		if (count != -1){
			a.erase(a.begin() + count);
		}
	} while (count != string::npos);

	int mover = (clave-1) * 2 ;
	int m2 = mover;

	for (int i = 0; i < clave; i++) {
		int j = i;
		result += a[j];
		while (j < a.length()) {
			int m3 = m2 - mover;
			if (m3 != 0) {

				j += mover;
				if (j < a.length()) {
					result += a[j];
				}

				j += m3;
				if (j < a.length()) {
					result += a[j];
				}

			}
			else {
				j += mover;

				if (j < a.length()) {
					result += a[j];
				}
			
			}

		}
		mover -= 2;
		if (mover == 0) {
			mover = (clave-1) * 2;
		}
	}

	return result;
}

string Railfence::descifrar(string a) {

	vector <int> tamanios;

	int mover = (clave-1) * 2;
	int longitud = a.length();
	int cantidad = (longitud / mover);

	if (longitud % mover != 0) {
		cantidad++;
	}

	for (int i = 0; i < clave; i++) {
		if (i == 0) {
			tamanios.push_back(cantidad);
		}
		else if (i < clave - 1) {
			tamanios.push_back((cantidad - 1) * 2);
		}
		else {
			tamanios.push_back(cantidad-1);
		}
	}

	int definirtamanios = suma(tamanios);
	int i = 1;
	int aumento = 1;

	while (definirtamanios < longitud) {

		tamanios[i]++;
		definirtamanios++;
		i += aumento;
		if (i == clave - 1 || i == 1) {
			aumento *= -1;
		}
	}

	vector <string> filas;
	for (int z = 0; z < tamanios.size(); z++) {
		filas.push_back(a.substr(0, tamanios[z]));
		a.erase(a.begin(), a.begin() + tamanios[z]);
	}

	int contador = 0, limit = 0;
	aumento = 1;

	string result2;

	while (contador <= longitud) {

		result2 += filas[limit][0];
		filas[limit].erase(0, 1);
		contador++;
		limit += aumento;

		if (limit == clave - 1 || limit == 0) {
			aumento *= -1;
		}

	}

	return result2;
}

int suma(vector<int> a) {
	int res = 0;
	for (int c = 0; c < a.size(); c++) {
		res += a[c];
	}
	return res;
}