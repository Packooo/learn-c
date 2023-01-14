//
// Created by wijay on 1/14/2023.
//

#include <iostream>
using namespace std;

// create a main class with a main method that takes no arguments and returns no value (void)
int main() {
    // declare a variable named "name" of type string
    string name;
    // declare a variable named "age" of type int
    int age;
    // declare a variable named "height" of type float
    float height;

    // print a message to the console
    cout << "What is your name? ";
    // read a string from the console and store it in the variable "name"
    cin >> name;
    // print a message to the console
    cout << "How old are you? ";
    // read an integer from the console and store it in the variable "age"
    cin >> age;
    // print a message to the console
    cout << "How tall are you? ";
    // read a float from the console and store it in the variable "height"
    cin >> height;

    // print a message to the console
    cout << "Hello " << name << ", you are " << age << " years old and " << height << " meters tall." << endl;

    // return 0 to the operating system
    return 0;
}