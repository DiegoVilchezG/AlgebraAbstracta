#include <iostream>
#include <string>

using namespace std;

string ui;

int main() {
	cout << "Ingrese una cadena: ";
	getline(cin, ui);
	ui.insert(ui.length() / 2, "******");
	cout << ui;
}
