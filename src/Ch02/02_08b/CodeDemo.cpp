// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

// #define AGE_LENGHT 4
int main(){

    const size_t AGE_LENGHT = 4; // const int AGE_LENGHT = 4;
    int age[AGE_LENGHT];
    float temperature[] = {31.5, 32.8, 38.4};

    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;
    
    std::cout << "Age Array has " << AGE_LENGHT << " elements " << std::endl;
    std::cout << "Age[0] = " << age[0] << std::endl;
    std::cout << "Age[1] = " << age[1] << std::endl;
    std::cout << "Age[2] = " << age[2] << std::endl;
    std::cout << "Age[3] = " << age[3] << std::endl;
    std::cout << std::endl << std::endl;
    std::cout << "Temp[0] = " << temperature[0] << std::endl;
    std::cout << "Temp[1] = " << temperature[1] << std::endl;
    std::cout << "Temp[2] = " << temperature[2] << std::endl;





    std::cout << std::endl << std::endl;
    return (0);
}
