#include <iostream>

int main(){
    int Capacity = 5;
    int hp = Capacity+1;
    char b = 'r';

    char make[5] = {'h','e','l','l','o'};
    make[hp] = b;

    for(int i = 0; i < hp; ++i){
        std::cout<<make[i]<<std::endl;
    }
    return 0;
}