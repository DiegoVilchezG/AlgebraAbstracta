#include <iostream>
#include <string>

using namespace std;
string ui, ui2;

int main() {
	cout << "Ingrese una cadena: ";
	getline(cin, ui);
	if (ui.length() % 2 != 0) {
		cout << "Error. La primera cadena debe tener una cantidad par de caracteres";
		return 0;
	}
	cout << "Ingrese otra cadena: ";
	getline(cin, ui2);
	ui.insert(ui.length() / 2, ui2);
	cout << ui;
}
