#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a = 123.456789;
    double b = 0.000123456;
    cout << fixed << setprecision(2) << a << endl;
    cout << scientific << setprecision(4) << b << endl;
    return 0;
}