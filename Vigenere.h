#pragma once
#include <string>

using namespace std;

class Vigenere {
public:
	Vigenere(string a);
	string cifrar(string &k, string s);
	string descifrar(string k, string s);
	string alfabeto;
};