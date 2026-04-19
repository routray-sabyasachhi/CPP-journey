#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a = 1234567.89;
    double b = 0.000123456;
    cout << scientific << setprecision(4);
    cout << a << endl;
    cout << b << endl;
    return 0;
}