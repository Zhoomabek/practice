#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int  weeks, months, years,days;
    cin >> weeks >> months >> years;
    days = (weeks * 7) + (months * 30) + (years * 365);
    cout << days;
    return 0;
}
//26
