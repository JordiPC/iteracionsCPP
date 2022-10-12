#include <iostream>
using namespace std;

int main() {

	int in, mult, r;

	cout << "Introdueix N per mostrar taula: " << endl;
	cin >> in;

	for (mult = 1; mult < 11;mult++)
	{
		r = in * mult;
		cout << in << "*" << mult << "=" << r << endl;
	}

	return 0;
}