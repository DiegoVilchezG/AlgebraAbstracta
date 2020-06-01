#pragma once
#include <string>
#include <vector>

using namespace std;

class Railfence {
	
	int clave;

public:
	string result;
	Railfence(int a);
	string cifrar(string a);
	string descifrar(string a);
};

int suma(vector<int> a);