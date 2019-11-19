#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double vklad;
    int proc;
    cout << "vvedite summu vklada : ";
    cin >> vklad;
    cout << "vvedite godovoi procent: ";
    cin >> proc;
    vklad += (proc * vklad * 5) / 100;
    cout <<"itogovaya summa cherez 5 let ="<< vklad << endl;
    return 0;
}
