//60
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int res = (n % 10) * 100 + (n - (n / 100) * 100 - n % 10) + n / 100;
	cout << res << endl;
	return 0;
}