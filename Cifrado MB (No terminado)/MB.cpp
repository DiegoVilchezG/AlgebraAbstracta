#include "MB.h"

MB::MB() {

}

string MB::cifrar(string a) {
	string result;
	for (char s : a) {
		int pos = alfa.find(s);
		string::iterator pos1 = first + pos;
		if (pos1 < second) {
			result += to_string(pos);
		}
		else if (pos1 < third) {
			pos = pos1 - second;
			result += to_string(row1) + to_string(pos);
		}
		else {
			pos = pos1 - third;
			result += to_string(row2) + to_string(pos);
		}
	}

	return result;
}

string MB::descifrar(string a) {
	int i = 0;
	string result;

	while (i < a.length()) {
		
		if (a[i] == '1') {
			i++;
			result += *(second + stoi(string(1, a[i])));
		}
		else if (a[i] == '6') {
			i++;
			result += *(third + stoi(string(1, a[i])));
		}
		else {
			result += *(first + stoi(string(1, a[i])));
		}
		i++;

	}
	return result;

}