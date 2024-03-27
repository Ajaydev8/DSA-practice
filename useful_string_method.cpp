#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    //Length method *******************
    // if(name.length() > 12) 
    // {
    //     std::cout << "Your name can't be over 12 characters";
    // }
    // else
    // {
    //     std::cout << "Welcome " << name;
    // }

    //**************************************

     //empty method ******************************

    // if(name.empty()) 
    // {
    //     std::cout << "You didn't enter your name";
    // }

    // ****************************************

    //clear method - to clear the name *******
    // name.clear();

    //************************************

    //append method ********************
    // name.append("@gmail.com");

    //************************

    //at method ***************
    //brings out the character at that number.

    // std::cout << name.at(5);

    //*****************************

    //insert method ********************
    // inserts a character at the given position.
    // name.insert(0, "@");

    //********************************

    //find method **************************
    // std::cout << name.find(' '); //will find the whitespace,replacable by a character.

    //*******************************

    //erase method ******************
    name.erase(0, 3); // it will erase the characters from 0 to 3 which means first three characters.

    std::cout << name;
    //*********************************

    //those were some useful string methods for c++
    //more available on c++ website
    
    return 0;
}