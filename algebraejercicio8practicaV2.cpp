#include <iostream>
#include <string>

using namespace std;
string ui, ui2;

int main() {
	cout << "Ingrese una cadena: ";
	getline(cin, ui);
	string::const_iterator iterador1 = ui.begin();
	for (iterador; iterador != ui.end();iterador++){
		cout << *iterador1 << endl;
	}
//Modificado por observacion sobre uso de while en lugar de for
//El original esta implementado con un while en lugar de un for
}