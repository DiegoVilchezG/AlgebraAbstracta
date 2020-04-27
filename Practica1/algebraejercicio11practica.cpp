#include <iostream>
#include <string>

using namespace std;

int x;
string ui, ui2;

int main() {

	cout << "Ingrese una palabra: ";
	cin >> ui;
	cout << "Ingrese otra palabra: ";
	cin >> ui2;

	x = ui.compare(ui2);

	if (x >= 0) {
		cout << ui;
	}
	else if (x < 0) {
		cout << ui2;
	}
}
