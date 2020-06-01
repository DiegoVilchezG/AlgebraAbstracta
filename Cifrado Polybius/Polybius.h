#pragma once
#include <string>
using namespace std;

class Polybius {
	string alfabeto;
	string index;

public:
	Polybius(string a, string i);
	string cifrar(string a);
	string descifrar(string a);
};