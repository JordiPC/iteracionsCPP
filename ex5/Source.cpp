#include <iostream>
using namespace std;

int main() {

	int in, max;
	max = 0;
	in = 1;

	while (in!=0)
	{
		cout << "Introdueix sequencia de nombres per saber el mes alt: " << endl;
		cin >> in;
		if (in>max)
		{
			max = in;
		}
	}

	cout << "El valor mes alt es " << max << endl;

	return 0;
}