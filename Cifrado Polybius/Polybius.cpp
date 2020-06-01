#include "Polybius.h"
#include "Matematica.h"

Polybius::Polybius(string a, string i) {
	alfabeto = a;
	index = i;
}

string Polybius::cifrar(string a) {

	int count;
	do {
		count = a.find(' ');
		if (count != -1) {
			a.erase(a.begin() + count);
		}
	} while (count != string::npos);

	string result;
	for (int i = 0; i < a.length(); i++) {

		size_t pos = alfabeto.find(a[i]);
		int pos2 = 0;
		if (pos < 25) {
			pos2 = 4;
		}
		if (pos < 20) {
			pos2 = 3;
		}
		if (pos < 15) {
			pos2 = 2;
		}
		if (pos < 10) {
			pos2 = 1;
		}
		if (pos < 5) {
			pos2 = 0;
		}
		result += index[pos2];
		result += index[modulo(pos,5)];
	}
	return result;
}

string Polybius::descifrar(string a){
	string result;
	int temp, temp2;
	int indexlength = index.length();
	for (int i = 0; i < a.length(); i += 2) {
		temp = index.find(a[i]);
		temp2 = index.find(a[i+1]);
		int j = temp*indexlength+temp2;
		result += alfabeto[j];
	}
	return result;
}