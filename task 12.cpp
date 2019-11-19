#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double x,e, sum;
    x = 3.6;
    e = 2.7182818284590452354;
    sum = pow(e, x - 2) + abs(sin(x))
        - pow(x, 4)*cos(1 / x);
    cout << sum << endl;
    return 0;
}
