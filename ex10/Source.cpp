#include <iostream>
using namespace std;

int main() {

	int n, x, y, num;
	num = 1;

	cout << "n: " << endl;
	cin >> n;

	for (size_t x = 1; x < n + 1; x++)
	{
		for (size_t y = 1; y < n + 1; y++)
		{
			cout << num << ' ' << endl;
			num += 1;
		}
	}

}