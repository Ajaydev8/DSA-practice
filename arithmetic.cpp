#include <iostream>


int main()
{
    //arithmetic operators = return the result of a specific
    //                       arithmetic operation (+ - * /)

    int students = 20;

    //first exercise (plus)****************************************

    // // students = students + 2;
    // //students++ for +1
    // students += 2;

    // std::cout << students << '\n';

    //******************************************

    //Second exercise (minus)************************************

    // students = students - 1;
    // students -= 1;
    // students--;

    // std::cout << students << '\n';

    //*********************************

    //third exercise (Astrik sign = multiplication)*******************

    // students = students * 2;
    // students*= 2;

    //************************************

    //fourth exercise (division = /)********************************    

    // students = students / 2;
    // students/=2;

    //*****************************

    //Fifth exercise***********************

    int remainder = students % 3;
    // using the modulus operator is best way to find
    // out if the number is even or odd.

    std::cout << remainder;
    
    //***********************************

    return 0;
}