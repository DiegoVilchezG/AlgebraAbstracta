#include <iostream>
#include "Polybius.h"

#define alfabeto ("ABCDEFGHIKLMNOPQRSTUVWXYZ")
#define indice ("ABCDE")

using namespace std;

int main() {
	Polybius poly(alfabeto, indice);
	cout << poly.cifrar("HOLA A TODOS MASTERS") << endl;
	cout << poly.descifrar("BCCDCAAAAADDCDADCDDCCBAADCDDAEDBDC") << endl;
}