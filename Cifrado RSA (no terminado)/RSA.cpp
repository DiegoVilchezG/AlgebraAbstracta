#include <iostream>
#include <NTL/ZZ.h>
#include <vector>
#include <math.h>

#define Alfabeto ("ABCDEFGHIJKLMNOPQRSTUVWXYZ,.-( )abcdefghijklmnopqrstuvwxyz<>*1234567890")

using namespace std;
using namespace NTL;

ZZ modulo(ZZ a, ZZ b) {
	ZZ r((-1 * ((a / b) * b) + a));

	return r;
}

ZZ mcd(ZZ a, ZZ b) {
	ZZ a2(a), b2(b);

	ZZ r(modulo(a, b));

	while (r != 0) {
		ZZ q(a / b);
		r = modulo(a, b);
		a = b;
		b = r;
	}

	return a;
}

ZZ inverso(ZZ a, ZZ b) {

	ZZ r1 = a, r2 = b;
	ZZ s1(1), s2(0);
	ZZ t1(0), t2(1);
	ZZ r, s, t;

	while (r2 > 0) {
		ZZ q = r1 / r2;

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

	return modulo(s1, b);

}

ZZ criba(ZZ a) {

	vector<ZZ> n;

	ZZ i(2);
	while (i < a) {
		bool marca = false;
		ZZ j(i-20);
		while(j < i){
			if (mcd(j, i) != 1) {
				marca = true;
				j += i;
			}
			j++;
		}
		if (marca != true) {
			cout << i << '\t';
			n.push_back(i);
		}
		i++;
	}



	return ZZ(0);
}

class RSA {
public:
	string alfabeto;
	ZZ p;
	ZZ q;
	ZZ n;
	ZZ p1;
	ZZ q1;
	ZZ phiN;
	ZZ e;
	ZZ d;
	vector<ZZ> cifrado;
	vector<ZZ> descifrado;

	RSA(string a) {
		alfabeto = a;
		p = ZZ(15913);
		q = ZZ(89019);
		n = p * q;
		p1 = p - 1;
		q1 = q - 1;
		phiN = p1 * q1;
		e = ZZ(263209);
		d = inverso(e, phiN);
	}

	void cifrar(string m) {
		for (int i = 0; i < m.length(); i++) {
			int x = alfabeto.find(m[i]);
			cout << "Texto plano (letra): " << m[i] << endl;
			cout << "Texto plano (numero): " << x << endl;
			ZZ x2(x);
			ZZ character = PowerMod(x2, e, n);
			cifrado.push_back(character);
		}
		cout << endl;
		for (int j = 0; j < cifrado.size(); j++) {
			cout << "Texto Cifrado: " << cifrado[j] << endl;
		}
		cout << endl;
		return;
	}

	void descifrar(vector<ZZ> zz) {
		for (int i = 0; i < zz.size(); i++) {
			ZZ character = PowerMod(zz[i], d, phiN);
			character = modulo(character, ZZ(alfabeto.length()));
			descifrado.push_back(character);
		}
		for (ZZ j : descifrado) {
			cout << "Texto descifrado: " << j << endl;
		}
	}

};

int main(){
	RSA rsa(Alfabeto);
	rsa.cifrar("Hola Wenas");
	rsa.descifrar(rsa.cifrado);
}