#include <iostream>

using namespace std;

int main(void) {
    int a = 0, b = 0, c = 0;

    cin >> a >> b >> c;

    for (int i = 0; i < 2; i++) cout << (a + b) % c << endl;
    for (int i = 0; i < 2; i++) cout << (a * b) % c << endl;
}