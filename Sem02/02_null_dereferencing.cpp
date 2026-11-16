// clang++ -O3 null_dereferencing.cpp 

#include <iostream>


typedef int (*func_t)();

static func_t func;

int print_67() {
    std::cout << "67" << std::endl;
    return 0;
}

void never_called() {
    func = print_67;
}

int main() {
    func();
}
