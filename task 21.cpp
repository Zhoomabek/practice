#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int  a,b,s1,s2,s3;
    cin >> a;
    cin >> b;
    s1 = 0.5*a*b;
    s3 = sqrt(pow(a, 2) + pow(b, 2));
    s2 = a + b + s3;
    cout << "ploshad=" << s1 << endl;
    cout << "perimetr=" << s2 << endl;
    cout << "gipotenuza=" << s3 << endl;
    return 0;
}
