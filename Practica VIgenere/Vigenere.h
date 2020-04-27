#pragma once

#include <iostream>

using namespace std;

class Vigenere
{
private:
    string clave;
public:
    string alfabeto;
    Vigenere(string, string);
    string Extension(string);
    string cifrar(string);
    string descifrar(string);
};
