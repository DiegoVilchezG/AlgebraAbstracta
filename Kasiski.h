#pragma once

#include <iostream>

using namespace std;

class Kasiski
{
public:
    int tam;//
    int i;
    int* ptr;
    string mensaje;
    Kasiski(string a);
    int CuantasVeces(string, string, int);
    string Repeticiones();
    void Distancias();
    void CantidadLetras(int*);
    int MCD();
    void Separador(int m);
    string GetClave();
private:
    string alfabeto;
    string clave;

};