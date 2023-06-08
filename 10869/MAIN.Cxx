#include <iostream>

using namespace std;

int main(void) {
    int a = 0, b = 0;

    cin >> a >> b;
    cout.precision(10);
    cout << (a + b) << endl;
    cout << (a - b) << endl;
    cout << (a * b) << endl;
    cout << (a / b) << endl;
    cout << (a % b) << endl;

    return 0;
}