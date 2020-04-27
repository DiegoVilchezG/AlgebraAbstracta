#include "Kasiski.h"

Kasiski::Kasiski(string a)
{
    alfabeto = "ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";
    clave = "";
    mensaje = a;
    i = 0;
    tam = 4;
    ptr = new int[100];
    for (int j = 0; j < 100; j++) {
        ptr[j] = 0;
    }
}

int Kasiski::CuantasVeces(string cadena, string coincidir, int n = 1) {
    int posicion = cadena.find(coincidir);
    while (posicion != string::npos) {
        int po = posicion;
        cadena.replace(posicion, 1, "_");
        if (n > 1) { cout << cadena << endl; }
        posicion = cadena.find(coincidir, posicion + 1);
        if (posicion - po > tam - 1) {//3
            cout << posicion - po << endl;
            ptr[i] = posicion - po;
            i++;
        }
        n++;
    }
    return n;
}

string Kasiski::Repeticiones() {
    for (int i = 0; i < mensaje.size() - tam + 1; i++) {
        string x = mensaje.substr(i, tam);
        CuantasVeces(mensaje, x);
    }
    return "a";
}

void Kasiski::Distancias() {
    int n = MCD();
    cout << "Distancias :";
    for (int j = 0; ptr[j] != 0; j++) {
        cout << ptr[j] << ", ";
    }
    cout << endl;
    cout << "El MCD es :" << n << endl;
}

void Kasiski::CantidadLetras(int lis[]) {
    for (int j = 0; j < 27; j++) {
        cout << alfabeto[j] << "   ";
    }
    cout << endl;
    for (int j = 0; j < 27; j++) {
        if (lis[j + 1] / 10 >= 1) { cout << lis[j] << "  "; }
        else { cout << lis[j] << "   "; }
    }
    cout << endl;
}
int Kasiski::MCD() {
    int n, i, num, mcd, r;
    n = 0;
    while (ptr[n] != 0) {
        num = ptr[n];
        if (n == 0) {
            mcd = num;
        }
        do {
            r = mcd % num;
            mcd = num;
            num = r;
        } while (r != 0);
        n++;
    }
    return mcd;
}

void Kasiski::Separador(int m = 0) {
    int n = MCD();
    string a;
    for (int j = m; j < mensaje.size(); j += n) { 
        a += mensaje[j];
    }
    cout << "C" << m + 1 << ": " << a << endl;
    int lis[27];
    for (int j = 0; j < 27; j++) {
        lis[j] = 0;
    }
    for (int j = 0; j < mensaje.size() / n; j++) {
        for (int k = 0; k < alfabeto.size(); k++) {
            if (a[j] == alfabeto[k]) {
                lis[k]++;
            }
        }
    }
    CantidadLetras(lis);
    int mayor = 0;
    int pos;
    for (int j = 0; j < 26; j++) {
        if (mayor < lis[j]) {
            mayor = lis[j];
            pos = j;
        }
    }
    cout << "El mayor es: " << mayor << endl;
    if (lis[pos + 4] >= mayor / 3 && lis[pos + 15] >= mayor / 3) { clave += alfabeto[pos]; }
    else { clave += alfabeto[pos - 4]; }
    cout << clave << endl;
}

string Kasiski::GetClave() {
    Repeticiones();
    Distancias();
    for (int j = 0; j < MCD(); j++) {
        Separador(j);
    }
    return clave;
}
