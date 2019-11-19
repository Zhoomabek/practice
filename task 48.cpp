#include <iostream>
using namespace std;
int main() {
    int a, b, c,s;
    cin >> a >> b >> c;
    if (b > a && c > a) {
        s=b + c;
    }
    else if(a > b&& c > b){
        s=a + c;
    }
    else {
        s=a + b;
    }
    cout << s << endl;
    return 0;
}
