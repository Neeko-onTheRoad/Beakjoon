#include <iostream>

using namespace std;

int main(void) {
    int a = 0, b = 0;
    cin >> a >> b;

    cout << a * (b % 100 % 10) << endl;
    cout << a * (b % 100 / 10) << endl;
    cout << a * (b / 100) << endl;
    cout << a * b;

    return 0;
}