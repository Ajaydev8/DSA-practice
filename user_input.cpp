#include <iostream>

//cout << (insertion operator)
// cin >> (extraction operator)

int main()
{
    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age; // this is wher age will be stored

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name); // this code gets line which means it takes the space between them also.

    // std::cin >> name;// <-------- // this is where name will be stored, The only problem is this does not take spaces in consideration.

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old.";
    //in VSCODE you cant write in the output tab
    // instead you'll have to navigate to terminal tab

    return 0;
}