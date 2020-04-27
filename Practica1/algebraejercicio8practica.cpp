#include <iostream>
#include <string>

using namespace std;
string ui, ui2;

int main() {
	cout << "Ingrese una cadena: ";
	getline(cin, ui);
	string::const_iterator iterador1 = ui.begin();
	while (iterador1 != ui.end()) {
		cout << *iterador1 << endl;
		iterador1++;
	}
}
