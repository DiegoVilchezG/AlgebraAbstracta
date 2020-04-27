#include "Vigenere.h"

Vigenere::Vigenere(string _clave, string _alfabeto)
{
    clave = _clave;
    alfabeto = _alfabeto;
}

string Vigenere::Extension(string mensaje) {
    string NewClave;
    for (int i = 0; i < mensaje.length(); i++) {
        int a = i % clave.length();
        NewClave += clave[a];
    }
    return NewClave;
}

string Vigenere::cifrar(string mensaje) {
    string mensajeCifrado;
    string claveN = Extension(mensaje);
    for (int i = 0; i < mensaje.length(); i++) {
        int posicionM = alfabeto.find(mensaje[i]);
        int posicionC = alfabeto.find(claveN[i]);
        int posicion = posicionM + posicionC;
        if (posicion < alfabeto.length())
            mensajeCifrado += alfabeto[posicion];
        else { mensajeCifrado += alfabeto[posicion - alfabeto.length()]; }
    }
    return mensajeCifrado;
}

string Vigenere::descifrar(string mensaje) {
    string mensajeDescifrado;
    string claveN = Extension(mensaje);
    for (int i = 0; i < mensaje.length(); i++) {
        int posicionM = alfabeto.find(mensaje[i]);
        int posicionC = alfabeto.find(claveN[i]);
        int posicion = posicionM - posicionC;
        if (posicion >= 0)
            mensajeDescifrado += alfabeto[posicion];
        else { mensajeDescifrado += alfabeto[posicion + alfabeto.length()]; }
    }
    return mensajeDescifrado;
}
