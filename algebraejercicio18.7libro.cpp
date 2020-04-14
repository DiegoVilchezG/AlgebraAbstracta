#include <iostream>
#include <string>

using namespace std;
string ui, out;

int main() {
	cout << "Ingrese una palabra/frase: ";
	getline(cin, ui);
	for (int i = 0; i < ui.length(); i++) {
		char x = ui[i] + 13;
		out += x;
		if (!(isalpha(out[i]))) {
			out[i] = out[i] - 26;
		}
		cout << out[i] << endl;
	}

	cout << "Palabra Original: " << ui << endl;
	cout << "Palabra cifrada: " << out << endl;
}

/*Nota tras realizar el ejercicio: En teoria este codigo es correcto para el 
ejercicio 18.7 del libro proporcionado, pero en mi maquina por alguna razon usar el isalpha como parametro
de un if me provoca errores, mientras que funciona normalmente en las computadoras de mis compañeros*/