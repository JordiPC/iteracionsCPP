#include <iostream>
using namespace std;

int main() {

	int n, nx, x;
	char s = '*';

	cout << "Introdueix mida dessitjada: " << endl;
	cin >> n;
	nx = n;

	for (size_t x = 0; x < n; x++)
	{
		cout << string(n,s) << endl;
	}

	return 0;
}