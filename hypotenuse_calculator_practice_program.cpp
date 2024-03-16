#include <iostream>
#include <cmath>

int main()
{
    double a;

    std::cout << "Enter side A: ";
    std::cin >> a; // this is where a will be stored

    double b;

    std::cout << "Enter side B: ";
    std::cin >> b; //this is where b value will be stored

    double c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Hypotenuse: " << c;

    return 0;
}