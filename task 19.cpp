#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double  a,b,s1,s2;
    cout << "vvedite price 1kg konfet"<<endl;
    cin >> a;
    cout << "vvedite price 1kg pechenya"<<endl;
    cin >> b;
    s1 = (a / 1000) * 300;
    s2 = (b / 1000) * 400;
    cout << "stoimost 300 gr konfet=" <<
        s1<<' '<< "rublya" << endl;
    cout << "stoimost 400 gr pechenya=" <<
        s2<<' '<< "rublya" << endl;
    cout << "stoimost treh pokupok,kazhdaya iz 2 kg pechenya i 1.8 kg konfet=" <<
        ((b * 2) + a + ((a / 1000) * 800)) * 3 <<' ' <<"rublya" << endl;

    return 0;
}
