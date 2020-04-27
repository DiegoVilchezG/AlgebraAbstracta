#include <iostream>
#include "DivisionEntera.h"
#include <math.h>

using namespace std;

MCD::MCD(int _a, int _b) {
	a = _a;
	b = _b;
	r = 1;
	vueltas = 0;
}

int MCD::algoritmo1() {
	cout << "En el algoritmo 1: "<<endl;;
	while (r != 0) {
		vueltas++;
		cout << "A = " << a <<endl;
		cout << "B = " << b << endl;
		cout << "Q = " << a/b << endl;
		r = a % b;
		cout << "R = " << r << endl;
		cout << "Vueltas: " << vueltas << endl;
		if (r == 0) {
			return b;
		}
		else {
			a = b;
			b = r;
		}
	}
}

int MCD::algoritmo2() {
	cout << "En el algoritmo 2: " << endl;;
	while (r != 0) {
		vueltas++;
		cout << "A = " << a << endl;
		cout << "B = " << b << endl;
		cout << "Q = " << a / b << endl;
		r = a % b;
		cout << "R = " << r << endl;
		cout << "Vueltas: " << vueltas << endl;
		if (r == 0) {
			return b;
		}
		else {
			if (r > (b/2)) {
				r = b - r;
			}
			a = b;
			b = r;
		}
	}
}

int MCD::algoritmo3(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		cout << "A = " << a << endl;
		cout << "B = " << b << endl;
		cout << "Q = " << a / b << endl;
		cout << "R = " << a % b << endl;
	}
	vueltas++;
	cout << "Vueltas: " << vueltas << endl;
	return algoritmo3(b, a % b);
}

int MCD::algoritmo4(int a, int b) {
	if (abs(b) > abs(a)) {
		return algoritmo4(b, a);
	}

	if (b == 0) {
		return a;
	}

	else {
		cout << "A = " << a << endl;
		cout << "B = " << b << endl;
		cout << "Q = " << a / b << endl;
		cout << "R = " << a % b << endl;
	}

	vueltas++;
	cout << "Vueltas: " << vueltas << endl;

	if (a % 2 == 0 && b % 2 == 0) {
		return 2 * (algoritmo4(a / 2, b / 2));
	}
	else if (a % 2 == 0 && b % 2 == 1) {
		return algoritmo4(a/2,b);
	}
	else if (a % 2 == 1 && b % 2 == 0) {
		return algoritmo4(a, b/2);
	}
	else {
		return algoritmo4((abs(a)-abs(b))/2,b);
	}
}


int MCD::algoritmo5(int a, int b) {
	int g = 1;
	vueltas++;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
	cout << "Q = " << a / b << endl;
	cout << "R = " << a % b << endl;
	cout << "Vueltas: " << vueltas << endl;

	while (a % 2 == 0 && b % 2 == 0){
		vueltas++;
		cout << "A = " << a << endl;
		cout << "B = " << b << endl;
		cout << "Q = " << a / b << endl;
		cout << "R = " << a % b << endl;
		cout << "Vueltas: " << vueltas << endl;
		a = a / 2;
		b = b / 2;
		g *= 2;
	}
	while (a != 0) {
		cout << "A = " << a << endl;
		cout << "B = " << b << endl;
		cout << "Q = " << a / b << endl;
		cout << "R = " << a % b << endl;
		vueltas++;
		cout << "Vueltas: " << vueltas << endl;

		while (a % 2 == 0) {
			a = a / 2;
		}
		while (b % 2 == 0) {
			b = b / 2;
		}
		int t = abs(a - b) / 2;
		if (a >= b) {
			a = t;
		}
		else {
			b = t;
		}
	}
	
	return g*b;
}

int MCD::algoritmo6(int a, int b) {

	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
	cout << "Q = " << a / b << endl;
	cout << "R = " << a % b << endl;
	vueltas++;
	cout << "Vueltas: " << vueltas << endl;
	
	while (a != b) {
		cout << "A = " << a << endl;
		cout << "B = " << b << endl;
		cout << "Q = " << a / b << endl;
		cout << "R = " << a % b << endl;
		vueltas++;
		cout << "Vueltas: " << vueltas << endl;
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	return a;
}