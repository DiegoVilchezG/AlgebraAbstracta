#include <iostream>
#include "DivisionEntera.h"

using namespace std;

int main() {
	MCD tarea(412, 260);
	MCD tarea2(412, 260);
	MCD tarea3(412, 260);
	MCD tarea4(412, 260);
	MCD tarea5(412, 260);
	MCD tarea6(412, 260);

	cout << "-----------------------------------------------------------------------------------------------------" << endl;
	cout << endl << "MCD tras algoritmo 1: " <<tarea.algoritmo1();
	cout << endl;
	cout << endl;
	cout << "-----------------------------------------------------------------------------------------------------" << endl;
	cout << endl << "MCD tras algoritmo 2: " << tarea2.algoritmo2();
	cout << endl;
	cout << endl;
	cout << "-----------------------------------------------------------------------------------------------------" << endl;
	cout << "En el Algoritmo 3: " << endl;
	cout << endl << "MCD tras algoritmo 3: " << tarea3.algoritmo3(tarea3.a, tarea3.b);
	cout << endl;
	cout << endl;
	cout << "-----------------------------------------------------------------------------------------------------" << endl;
	cout << "En el Algoritmo 4: " << endl;
	cout << endl << "MCD tras algoritmo 4: " << tarea4.algoritmo4(tarea4.a, tarea4.b);
	cout << endl;
	cout << endl;
	cout << "-----------------------------------------------------------------------------------------------------" << endl;
	cout << "En el Algoritmo 5: " << endl;
	cout << endl << "MCD tras algoritmo 5: " << tarea5.algoritmo5(tarea5.a, tarea5.b);
	cout << endl;
	cout << endl;
	cout << "-----------------------------------------------------------------------------------------------------" << endl;
	cout << "En el Algoritmo 6: " << endl;
	cout << endl << "MCD tras algoritmo 6: " << tarea6.algoritmo6(tarea6.a, tarea6.b);
	cout << endl;
	cout << endl;
	cout << "-----------------------------------------------------------------------------------------------------" << endl;

	cout << endl;
	cout << endl;
	cout << "A partir de la cantidad de vueltas, concluimos que el Algoritmo 2 es el mas eficiente, ya que es el que menos vueltas da" << endl;
}
