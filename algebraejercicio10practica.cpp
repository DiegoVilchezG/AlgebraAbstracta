#include <iostream>
#include <string>

using namespace std;
string ui, word, repword;
int counter;

int main() {
	cout << "Ingrese una cadena: ";
	getline(cin, ui);
	cout << "Ingrese una palabra/frase que este en la cadena anterior: ";
	getline(cin, word);
	cout << "Ingrese una palabra/frase para reemplazarla: ";
	getline(cin, repword);
	for (size_t offset = ui.find(word); offset != string::npos; offset = ui.find(word, offset + word.length())) {
		ui.replace(offset, word.length(), repword);
	}
	cout << ui;
}