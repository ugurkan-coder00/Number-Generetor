#include <iostream>
#include "random.h"

int main(int, char**){
    Random number;
    std::cout << number.randint(10,true) << endl;
}
