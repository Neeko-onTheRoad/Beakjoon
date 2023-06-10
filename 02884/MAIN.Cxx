#include <iostream>

using namespace std;

int main(void) {
    int H = 0;
    int M = 0;
    int C = 0;

    cin >> H >> M >> C;

    int Ch = C / 60;
    int Cm = C % 60;

    H = (H + Ch + (M + Cm) / 60) % 24;
    M = (M + Cm) % 60;

    cout << H << ' ' << M;
    return 0;
}