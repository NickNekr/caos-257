// g++ -O3 01_overflow.cpp

#include <iostream>


int main() {
    for (int j = 0; j < 9; ++j) {

        std::cout << (j * 1'000'000'000) << std::endl;
        if (j >= 9) break;
    }
}
