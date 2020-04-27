#include <iostream>
#include <string>

using namespace std;
string ui, ui2;
char x[100];

int main() {
	cout << "Ingrese una cadena: ";
	getline(cin, ui);
	for (int i = 0; i < ui.length(); i++) {
		if (islower(ui[i])) {
			ui[i] = toupper(ui[i]);
		}
		else if (isupper(ui[i])) {
			ui[i] = tolower(ui[i]);
		}
	}
	cout << ui;
}
