#include <iostream>

int main(void)
{

    // ternary operator ?: = replacement to an if/else statement
    // condition ? expressiona1(if true) : expression2(if false);

    //first exercise *************************************

    int grade;

     std::cout << "Enter grade between (1-100): ";
     std::cin >> grade;

    // writing in ternary condition style 
    (grade >= 60) ? std::cout << "You Pass!" : std::cout << "You fail!";
    //this really saves us some key strokes.

    //******************************************************

    //second exercise *****************************************

    int number = 9;

    number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";

    //*********************************************************

    //third execise *******************************************

    bool hungry = true;

    // hungry ? std::cout << "You are hungry" : std::cout << "You are full";
    std::cout << (hungry ? "You are hungry" : "You are full."); // this is another way of writing ternary condition

    return 0;
}