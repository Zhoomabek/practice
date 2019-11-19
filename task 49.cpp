#include <iostream>
using namespace std;
int main() {
    int a[4], max = 0;
    for (int i = 0; i < 4; ++i) {
        cin >> a[i];
        if (max < a[i] && a[i] % 2 == 0) max = a[i];
    }
    if (!max) cout << "Not found";
    else {
        cout << max;
    }
    return 0;
}
