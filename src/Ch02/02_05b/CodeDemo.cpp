// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8;
    auto b = 12345678901;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';
    auto g = "C++ Rocks!";

    std::cout << "The type of a is " << typeid(a).name() << std::endl; // name for int
    std::cout << "The type of b is " << typeid(b).name() << std::endl; // name for long
    std::cout << "The type of c is " << typeid(c).name() << std::endl; // name for float
    std::cout << "The type of d is " << typeid(d).name() << std::endl; // name for double
    std::cout << "The type of e is " << typeid(e).name() << std::endl; // name for bool
    std::cout << "The type of f is " << typeid(f).name() << std::endl; // name for char
    std::cout << "The type of a is " << typeid(g).name() << std::endl; // fancy name for string


    std::cout << std::endl << std::endl;
    return (0);
}
