#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int a, b, sum;
    a = 2;
    b = 3;
    sum = (a + (4 * b))*(a - (3 * b)) + (a*a);
    cout << sum << endl;
    return 0;
}
