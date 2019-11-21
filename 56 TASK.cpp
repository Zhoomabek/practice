//56
#include <iostream>
# include <cmath>

using namespace std;

int main(){
	char S;
	int N;
	cin >> S;
	cin >> N;
	switch (N) {
	case 1: switch (S) {
	case 'SEVER': cout << "ZAPAD"; break;
	case 'JUG': cout << "VOSTOK"; break;
	case 'ZAPAD': cout << "JUG"; break;
	case 'VOSTOK': cout << "SEVER"; break;
	} break;
	case -1: switch (S) {
	case 'SEVER': cout << "VOSTOK"; break;
	case 'JUG': cout << "ZAPAD"; break;
	case 'ZAPAD': cout << "SEVER"; break;
	case 'VOSTOK': cout << "JUG"; break;
	} break;
	case 0: switch (S) {
	case 'SEVER': cout << "SEVER"; break;
	case 'JUG': cout << "JUG"; break;
	case 'ZAPAD': cout << "ZAPAD"; break;
	case 'VOSTOK': cout << "VOSTOK"; break;
	} break;
	}
	cout << eNdl;
	return 0;
}