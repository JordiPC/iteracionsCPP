#include <iostream>
using namespace std;

int main() {
	
	int in, vt, div, r;
	vt = 0;
	div = 0;
	in = 1;

	while (in!=0)
	{
		cout << "Introduieix els nombres per calcular la mitjana aritmètica: " << endl;
		cin >> in;
		vt = vt + in;
		div += 1;

	}
	r = vt / div;
	cout << "La mitjana aritmètica es: " << r << endl;

	return 0;
}