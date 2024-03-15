#include <iostream>

int main(){

  // first practice *****************************************************************

  // int x; //Declaration
  // x = 5; //assigment

  // std::cout << x; //Displaying

  // second practice

  // int x = 5; //Declaration
  // int y = 6; //another declaration
  // int sum = x + y; 

  // std::cout << x << '\n';
  // std::cout << y << '\n';
  // std::cout << sum << '\n';


  // Third Practice

  // Integer (whole numbers)
  int age = 21;
  // int year = 2023;
  // int days = 7.5;

  // std::cout << days;
  // It shows 7 because int doesn't show decimal numbers

  // Double (numbers that include decimals)
  // double price = 10.99;
  // double gpa = 2.5;
  // double temprature = 21.8;

  // // This shows the number with decimal.
  // std::cout << price;

  // char (single character)
  // char grade = 'A';
  // char initial = 'BC';
  // char currency = '$';

  // // It only shows 1 character because char can store only 1 character
  // std::cout << initial;

  // boolean (true or false)
  // Think of this as a switch it only have two states, either ON or OFF, which is 1 or 0, which is true or false
  // bool student = false; 
  // bool power = true;
  // bool forSale = true;

  // // It shows either 1 or 0 (1 is true, 0 is false)
  // std::cout << student;

  
  // String (objects that represents sequence of texts)
  std::string name = "Bro";
  std::string day = "Friday";
  std::string food = "Pizza";
  std::string address = "123 fake St.";
  
  std::cout << "Hello " << name << "!" << '\n';
  std::cout << "You are " << age << " years old.";
 
  return 0;
}