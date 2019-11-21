//59
#include <iostream>
using namespace std;
int main() {
	int n, m4, m3, m2, m1;
	cout << "Vvedite 4 znachnoe chislo" << endl;
	cin >> n;
	if (n < 1000) {
		cout << "error";
		return 1;
	}
	m4 = n % 10;
	m3 = n / 10 % 10;
	m2 = n / 10 / 10 % 10;
	m1 = n / 10 / 10 / 10 % 10;
	if (m1 > m2 && m2 > m3 && m3 > m4) {
		cout << "YES" << endl;
	}
	else {
		cout << "no" << endl;
	}

	return 0;
}