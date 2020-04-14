#include <iostream>
#include <string>

using namespace std;
string ui;
string word = "algebra";
int intentos = 1;
bool win = false;
int continuar = 1;

int main() {
	cout << "------------------------Juego del Ahorcado------------------------" << endl;
	do {
		cout << "Adivine la palabra: ";
		for (int i = 0; i < word.length(); i++) {
			cout << "X";
		}
		cout << endl;
		for(win; win != true; intentos++){
			cin >> ui;

			if (ui == word) {
				cout << "Adivinaste mi palabra. Deseas jugar de nuevo? (1: Si, 0: No): ";
				cin >> continuar;
				if (continuar == 0) {
					win = true;
					intentos = 0;
				}
			}
			
			if (intentos == 1) {
				cout << "  O  " << endl;
			}
			if (intentos == 2) {
				cout << "  O  " <<endl<<" /   "<< endl;
			}
			if (intentos == 3) {
				cout << "  O  " << endl << " /|" << endl;
			}
			if (intentos == 4) {
				cout << "  O  " << endl << " /|/ "<< endl;
			}
			if (intentos == 5) {
				cout << "  O  " << endl << " /|/ " << endl << " /   " << endl;
			}
			if (intentos == 6) {
				cout << "  O  " << endl << " /|/ " << endl << " / / " << endl;
			}
			if (intentos == 7) {
				cout << "Usted Pierde. Desea jugar de nuevo? (1: Si, 0: No): ";
				cin >> continuar;
				if (continuar == 0) {
					intentos = 8;
					win = true;
				}
			}
		}
	} while (continuar != 0);
}