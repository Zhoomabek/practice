#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double  t,s,v;
    cout << "vvedite vremya v minutah" << endl;
    cin >> t;
    cout << "vvedite rasstoyanie v kilometrah" << endl;
    cin >> s;
    v = (s*1000) / (t*60);
    cout << "scorost="<<v<<"m/s"<< endl;
    return 0;
}
