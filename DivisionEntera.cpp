#include <iostream>

using namespace std;
int a, q, d, r;


int main() {
	cout << "Ingrese el dividendo: ";
	cin >> a;
	cout << "Ingrese el divisor: ";
	cin >> d;
	r = a % d;
	q = (a - r) / d;
	cout <<"Dividendo: " <<a << endl;
	cout <<"Divisor: " <<d << endl;
	cout <<"Cociente: " <<q << endl;
	cout <<"Residuo: " <<r << endl;
}