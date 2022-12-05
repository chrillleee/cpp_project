#include <iostream>
#include "myclass.hpp"

MyClass::MyClass()
    {
        std::cout<<"constructor\n";    
    };
MyClass::~MyClass()
    {
        std::cout<<"destructor\n";          
    };
void MyClass::WriteHelloWorld()
    {
        std::cout<<"Hello world \n";
    };