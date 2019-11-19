#include "pch.h"
#include<iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if ((a - b) >= 100)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
