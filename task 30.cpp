#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int  a,s1,s2,s3;
    cin >> a;
    s1= (a*a)*(a*a);
    s2 = (a*a)(a*a)(a*a);
    s3 = (a*a*a)(a*a*a)(a*a*a)(a*a*a)(a*a*a);
    cout << "a)" <<s1 <<endl;
    cout << "b)" << s2 << endl;
    cout << "c)" << s3 << endl;
    return 0;
}
