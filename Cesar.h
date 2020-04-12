#pragma once
#include <string>

using namespace std;

class Cesar {
	string userinput;
	string cipher;
	string decipher;
	int key;

public:
	Cesar(string a, int k);
	void cifrar();
	void descifrar();
	void descifrar2();
};