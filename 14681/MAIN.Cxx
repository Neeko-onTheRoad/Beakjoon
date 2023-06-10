#include <iostream>

int main(void) {
    int H = 0;
    int M = 0;

    std::cin >> H >> M;

    if (M >= 45) std::cout << H << ' ' << (M - 45);
    else if (H > 0) std::cout << (H - 1) << ' ' << (M + 15);
    else std::cout << 23 << ' ' << (M + 15);

    return 0;
}