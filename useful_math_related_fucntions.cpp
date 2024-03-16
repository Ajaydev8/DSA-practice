#include <iostream>
#include <cmath>

int main()
{
    double x = 3;
    double y = 4;
    double z;

    // compares 2 or more variables and gives the greater value
    // z = std::max(x, y); //<------------

    //compares 2 or more variables and gives the minimum variable back.
    // z = std::min(x, y); //<---------------

    // Derived from cmath library this is power function 
    // takes 2 numbers in parameter. (2, 3) means 2 to the power 3.
    // z = pow(2, 4); // <---------------

    //square root function
    // z = sqrt(9); // <----------------

    //absolute value, if you insert negative number it gives positive.
    // z = abs(-3); // <----------------

    // this function rounds the number.
    // z = round(3.14); // <----------------

    //If you want to round numbers to UP direction
    // z = ceil(3.14); // <----------------

    //floor function to round down numbers
    z= floor(4.9); // <----------------


    std::cout << z;
    

    return 0;
}