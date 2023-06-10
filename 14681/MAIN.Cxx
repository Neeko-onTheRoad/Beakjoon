#include <iostream>

int main(void) {
    unsigned __int8 H = 0;
    unsigned __int8 M = 0;

    std::cin >> H >> M;

    if (M >= 45) std::cout << H << ' ' << (M - 45);
    else if (H > 0) std::cout << (H - 1)) << ' ' << (M + 15));
    
}