#include <iostream>
using namespace std;

int main() {

	int n, con, r;

	cout << "IUntrodueix un valor: " << endl;
	cin >> n;
	con = n % 2;

	while (con==0)
	{
		cout << n << endl;
	}

	return 0;
}