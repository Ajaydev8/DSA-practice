#include <iostream>

int main()
{
    // While loop: while loop is like if statement but we can
    //             intentionally repeat some code with it.

    std::string name;

    // until the condition given in the parantheses is true the
    // the code will execute itself over and over again.
    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name;

    return 0;
}