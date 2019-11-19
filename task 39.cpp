#include<iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << "Yes" << endl;
    }
    else {
        cin >> a >> b;
    }
        cout <<a<<" "<<b << endl;
    return 0;
}
