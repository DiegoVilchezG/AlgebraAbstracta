#include "Cesar.h"
#include <iostream>
using namespace std;

Cesar::Cesar(string a, int k) {
	userinput = a;
	key = k;
}

void Cesar::cifrar() {
	for (int i = 0; i < userinput.length(); i++) {
		//Condicion para añadir los caracteres modificados a la string resultante y espacios (que no se cifran)
		if (userinput[i] != ' ') {
			cipher += userinput[i] + key;
		}
		else {
			cipher += ' ';
		}
		//Condicion que mantiene los caracteres en la string resultante como letras solamente
		if (!(isalpha(cipher[i])) && userinput[i] != ' ') {
			cipher[i] = cipher[i] - 26;
		}
	}
	//Se imprime la entrada original y la cifrada
	cout << "Frase Original: " << userinput << endl;
	cout << "Frase cifrada: " << cipher << endl;
}

void Cesar::descifrar() {

	for (int i = 0; i < cipher.length(); i++) {
		//Condicion para añadir los caracteres modificados a la string resultante y espacios (que no se cifran)
		if (cipher[i] != ' ') {
			decipher += cipher[i] - key;
		}
		else {
			decipher += ' ';
		}
		//Condicion que mantiene los caracteres en la string resultante como letras solamente
		if (!(isalpha(decipher[i])) && cipher[i] != ' ') {
			decipher[i] = decipher[i] - 26;
		}
	}
	//Se imprime la entrada original y la cifrada
	cout << "Frase Cifrada: " << cipher << endl;
	cout << "Frase Descifrada: " << decipher << endl;
}


void Cesar::descifrar2() {

	for (int i = 0; i < userinput.length(); i++) {
		//Condicion para añadir los caracteres modificados a la string resultante y espacios (que no se cifran)
		if (userinput[i] != ' ') {
			decipher += userinput[i] - key;
		}
		else {
			decipher += ' ';
		}
		//Condicion que mantiene los caracteres en la string resultante como letras solamente
		if (!(isalpha(decipher[i])) && userinput[i] != ' ') {
			decipher[i] = decipher[i] - 26;
		}
	}
	//Se imprime la entrada original y la cifrada
	cout << "Frase Cifrada: " << userinput << endl;
	cout << "Frase Descifrada: " << decipher << endl;
}