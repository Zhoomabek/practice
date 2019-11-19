#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if (a && b != 10 && a % 2 == 0) {
        cout << a + b << endl;
    }
    else {
        cout << a * b << endl;
    }
        return 0;
}
