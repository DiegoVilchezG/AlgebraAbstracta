#include <iostream>
#include "Matematica.h"

using namespace std;

int modulo(int a, int b) {
	int r = (-1 * ((a / b) * b) + a);
	if (r < 0) {
		r += b;
	}
	return r;
}

int mcd(int a, int b) {
	int a2 = a, b2 = b;

	int r = modulo(a, b);

	while (r != 0) {
		int q = a / b;
		r = modulo(a, b);
		a = b;
		b = r;
	}

	return a;
}

int euclidesExt(int a, int b) {

	int r1 = a, r2 = b;
	int s1 = 1, s2 = 0;
	int t1 = 0, t2 = 1;
	int r, s, t;

	while (r2 > 0) {
		int q = r1 / r2;

		r = r1 - (q * r2);
		r1 = r2;
		r2 = r;

		s = s1 - (q * s2);
		s1 = s2;
		s2 = s;

		t = t1 - (q * t2);
		t1 = t2;
		t2 = t;

	}
	
	return modulo(s1,b);

}