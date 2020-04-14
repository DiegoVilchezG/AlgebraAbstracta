#include <iostream>
#include <string>

using namespace std;
string ui, ui2;
char x[100];

int main() {
	cout << "Ingrese una cadena: ";
	getline(cin, ui);
	cout << '{';
	for (int i = 0; i < ui.length(); i++) {
		x[i] = ui[i];
		cout << x[i];
		if (i < ui.length() - 1) {
			cout << ',';
		}
	}
	cout << '}';
	for (int i = 0; i < 100; i++) {
		ui2+=x[i];
	}
	cout << endl;
	cout << ui2;
}