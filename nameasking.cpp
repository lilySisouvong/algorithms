#include <iostream>
#include <string>

int main(){
    std::cout<< "First name!" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Last name!" <<std::endl;
    std::string last;
    std::cin >>last;

    std::string greeting = "Hello, " + name + last + "!";
    std::string stars (greeting.size(), ' ');

    std:: cout<< stars << std::endl;
    std:: cout<< greeting << std:: endl;
    std::cout << stars << std::endl;
    
    return 0;
}