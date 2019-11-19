#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int  a, b, c, s1, s2;
    cin >> a >> b >> c;
    s1 = (a + b + c) / 3;
    s2 = (a*2)-(c*3)-(b*3);
    cout <<"srednee arifm="<<s1 << endl;
    cout <<"raznoct="<< s2 << endl;
    return 0;
}
