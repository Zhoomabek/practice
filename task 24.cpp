#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int  days, sale, sum;
    cout << "vvedite colichestvo dney" << endl;
    cin >> days;
    cout << "vvedite procent skidki" << endl;
    cin >> sale;
    cout << "vvedite summu" << endl;
    cin >> sum;
    sale /= 100;
    for (int i = 0; i < days; i++){
        sum += 3;
        sale += sum * sale;
        cout << "pribil=" << sum << endl;
    }
    return 0;
}
