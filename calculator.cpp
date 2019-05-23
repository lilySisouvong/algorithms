#include <iostream>
#include <string>
int main(){
    std::cout<< "Number 1!" << std::endl;
    std::string first;
    std::cin>> first;
    std::cout<< "Number 2!" << std::endl;
    std::string second;
    std::cin>> second;
    int sum = std::stoi(first) + std::stoi(second);
    std::cout<< "The sum is: "<< sum << std::endl;

}