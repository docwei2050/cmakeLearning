#include <iostream>
#include "child1_sub/include/Test1.h"
#include "child2_sub/includddde/Test2.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Test1 test1;
    test1.print1();
    Test2 test2;
    test2.print2();
    return 0;
}
