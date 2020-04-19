#include "Vigenere.h"
#include <iostream>
#include <string>

using namespace std;

Vigenere::Vigenere(string a) {
	alfabeto = a;
}

string Vigenere::cifrar(string &k, string s) {
	string temp;
	int counter = 1;

	if (k.length() >= s.length()) {
		return "La clave debe ser mas corta que el mensaje";
	}

	for (int i = 0; i < s.length()-(s.length()%k.length()); i++) {
		int j = i;
		if (j >= k.length()) {
			j = j - (k.length() * counter);
			counter++;
		}
		k += k[j];
	}
	for (int i = 0; i < s.length(); i++) {
		int j = i;
		size_t s1 = alfabeto.find(s[i]);
		size_t k1 = alfabeto.find(k[i]);
		int z = s1 + k1;
		if (z > alfabeto.length()) {
			z -= alfabeto.length();
		}
		temp += alfabeto[z];
	}

	return temp;
}

string Vigenere::descifrar(string k, string s) {
	string temp;
	int counter = 1;
	for (int i = 0; i < s.length() - (s.length() % k.length()); i++) {
		int j = i;
		if (j >= k.length()) {
			j = j - (k.length() * counter);
			counter++;
		}
		k += k[j];
	}

	for (int i = 0; i < s.length(); i++) {
		int j = i;
		size_t s1 = alfabeto.find(s[i]);
		size_t k1 = alfabeto.find(k[i]);
		int z = s1 - k1;
		if (z < 0) {
			z += alfabeto.length();
		}
		temp += alfabeto[z];
	}

	return temp;
}