#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double x, sum;
    x = -2.34;
    sum = ((abs(x - 5) - (sin(x))) / 3)
        + sqrt(pow(x,2)+2014)*(cos(2 * x)) - 3;
    cout << sum << endl;
    return 0;
}
