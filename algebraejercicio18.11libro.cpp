#include <iostream>
#include <string>

using namespace std;
string ui, ui2, out;

int main() {
	cout << "Ingrese su Nombre: ";
	getline(cin, ui);
	cout << "Ingrese su Apellido: ";
	getline(cin, ui2);
	out = ui +' '+ ui2;
	cout << out;
}