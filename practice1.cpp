#include <iostream>
#include <cmath>

int main() {
    int x;
    int y;
    int z;

    std::cout << "What is the Perpendicular Of Triangle : ";
    std::cin >>  x;

    std::cout << "What is the Base Of Triangle : ";
    std::cin >>  y;

    z= sqrt(pow(x,2) + pow(y,2));

    std::cout << "The Hypotenuse Is : "  << z << "\n";

    return 0;








}