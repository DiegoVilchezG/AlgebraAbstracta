#pragma once
#include <string>

using namespace std;

class MB {
private:
	string abc = "abcdefghijklmnopqrstuvwxyz ";
	string alfa = "d\\enar\\iosbcfghjklmpqtuvwxyz ";
	string::iterator first = alfa.begin(), second = first + 10, third = second + 10;
	int row1 = 1, row2 = 6;

public:
	MB();
	string cifrar(string a);
	string descifrar(string a);

};