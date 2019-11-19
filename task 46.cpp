#include "pch.h"
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a&&b&&c%5==0) {
        cout << a+b+c << endl;
    }
    else {
        cout << "error" << endl;
    }
    return 0;
}
