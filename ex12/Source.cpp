#include <iostream>
using namespace std;

int main() {

	int n, nx, ny, t;
	char star, space;
	star = '*';
	space = ' ';
	nx = 1;
	t = 0;

	cout << "Introdueix valor de n: " << endl;
	cin >> n;
	ny = n;

	while (t < n)
	{
		cout << string(ny, space) << string(nx, star) << endl;
		nx += 2;
		ny -= 1;
		t += 1;
	}
}