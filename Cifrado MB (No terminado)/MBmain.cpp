#include <iostream>
#include "MB.h"

using namespace std;

MB mb;

int main() {
	cout << mb.cifrar("hola buenas") << endl;
	cout << mb.descifrar("1481746810622349") << endl;
}