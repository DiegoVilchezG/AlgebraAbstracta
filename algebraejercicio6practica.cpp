#include <iostream>
#include <string>

using namespace std;

int main() {
	string desaprobe("Yo desaprobe el curso de Algebra Abstracta");
	cout << desaprobe << endl;
	desaprobe.replace(3, 9, "aprobe");
	cout << desaprobe << endl;
}