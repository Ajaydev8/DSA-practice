#include<iostream>

int main()
{
    //type conversion = conversion a value of one data type to another
    //                  Implicit = Automatic
    //                  Explicit = Precede value with new data type (int)

    //first exercise(Implicit)**************************

    //first let's try doing Implicit type conversion
    // int x = 3.14; // <------------ // this value will be automatically be shown as 3 because it is int
    //this is what implicit is It is  automatic

    //second what if it was double data type
    // double x = 3.14; // <----------- // this value be 3.14 as it is assigned in double data type which supports the decimal value

    //third What if we try to expicitly try to change it
    // double x = (int) 3.14; // <----------- // we changed the data type to int explicitally calling it out in the parentheses.

    // std::cout << x; 

    //*****************************************************
    
    // some other examples ************************

    //IMPLICIT
    // char x = 100;//<--------- // we are asking ASCII table to convert the numebr 100 to conver to it as a character
    // which is d in number 100
    // it happens automatically which is implicit.
    // std::cout << x; // <---------

    //EXPLICIT

    // std::cout << (char) 100; // <---------

    //***********************************************

    //how is this usefull?? *******************

    // lets say we have an Exam

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%";

    return 0;
}