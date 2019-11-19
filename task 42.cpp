#include "pch.h"
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int a;
    cin >> a;
    if (2 <= a <= 5) {
        a += 10;
        cout << a << endl;
    }
     if (7 <= a <= 40) {
        a -= 100;
        cout << a << endl;

    }
    if (a <= 0 && a > 3000) {
        a *= 3;
        cout << a << endl;

    }
    else {
        a = 0;
        cout << a << endl;

    }

    return 0;
}
