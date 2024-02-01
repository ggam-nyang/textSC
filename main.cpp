#include <iostream>
#include "units/Firebat.h"
#include "units/Marine.h"


int main() {
    Unit* marine = new Marine();

    delete marine;
    std::cout << "Hello, World!" << std::endl;

    return 0;
}
