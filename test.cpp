#include <stdio.h>
#include <iostream>
#include <math.h>
int main() {
    int x = -1;

    if (x) {
        std::cout << "-1 is true" << std::endl;
    } 
    else {
        std::cout << "-1 is false" << std::endl;
    }

    if (x == false) {
        std::cout << "-1 equals false" << std::endl;
    } 
    else {
        std::cout << "-1 does not equal false" << std::endl;
    }

    return 0;
}