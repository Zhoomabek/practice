#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double x,a,b,sum;
    x = 1;
    a = 0.1;
    b = 0.2;
    sum = pow((pow(x, 2) + b), 1/5) -
        (pow(b, 2)*(pow(sin(x + a), 3)))/x ;
    cout << sum << endl;
    return 0;
}
