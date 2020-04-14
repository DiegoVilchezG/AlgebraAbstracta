#include <iostream>
#include <string>

using namespace std;
string ui, word, repword;
int counter;

int main() {
	cout << "Ingrese una cadena: ";
	getline(cin, ui);
	cout << "Ingrese una palabra que este en la cadena anterior: ";
	cin >> word;
	if (word.length() == 0) {
		return 0;
	}
	int repeticiones = 0;
	for (size_t offset = ui.find(word); offset != string::npos; offset = ui.find(word, offset + word.length())) {
		++repeticiones;
	}
	cout << "Repeticiones de " << word << ": " << repeticiones;
}