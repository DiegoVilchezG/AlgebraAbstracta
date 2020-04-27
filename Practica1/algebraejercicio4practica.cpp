#include <iostream>
#include <string>

using namespace std;

string ui3, inp1, inp2;
int ui1, ui2;

int main() {
	cout << "Ingrese un primer numero: ";
	cin >> ui1;
	cout << "Ingrese un segundo numero: ";
	cin >> ui2;
	inp1 = to_string(ui1);
	inp2 = to_string(ui2);
	ui3 = inp1 + inp2;
	cout << ui3 << endl;
	int a = stoi(inp1);
	int b = stoi(inp2);
	a *= 2;
	b *= 2;
	inp1 = to_string(a);
	inp2 = to_string(b);
	ui3 = inp1 + inp2;
	cout << ui3 << endl;
}
