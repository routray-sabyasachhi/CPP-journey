#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a;
    cin >> a;

    cout << scientific << setprecision(4) << a << endl;

    return 0;
}