#include <iostream>

int main() {
    // The Const keyword specifies that a variable's value is constant
    // It tells the compiler to prevent it from modifying it from anything
    // So that's (read-only)
    // Common convention for constant is to make all the characters uppercase.

    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm";

    // some example of constants
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
}