#include <iostream>

int main(){
    int Capacity= 5;
    int start = 0;
    int index = 0;
    char array[5] = {'h','e','l','l','o'};
    char look = 'e';
    for(int i = start; i < Capacity; ++i){
        if (array[i] == look){
            index = i;
        }
    }
    std::cout<< index <<std::endl;
    return 0;
}
