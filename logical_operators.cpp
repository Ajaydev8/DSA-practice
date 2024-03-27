#include <iostream>

int main()
{
    // && = check if two condition are true or false
    // || = check if at least one of two condition is true
    // ! = reverses the logical state of its operand

    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // && use

    // if(temp > 0 && temp < 30)
    // {
    //     std::cout << "The temprature is good!";
    // }
    // else 
    // {
    //     std::cout << "The temprature is bad!";
    // }

    // || use

    if(temp <= 0 || temp >= 30)
    {
        std::cout << "The temperature is bad!\n";
    }
    else
    {
        std::cout << "The temperature is good!\n";
    }

    if(!sunny)
    {
        std::cout << "It is cloudy outside!";
    }
    else
    {
        std::cout << "It is sunny outside!";
    }

    return 0;
}