#include <iostream>

int main(){
    int Capacity = 5;
    int blue = 0;
    char array[5] = {'h','e','l','l','o'};
    char* artisan = new char[Capacity];
    int x = 2;
    int y = 4;
    for(int i = x; i < y; ++i){
        artisan[blue] = array[i];
        blue +=1;
    }
    for(int i = 0; i < Capacity; ++i){
        std::cout<<artisan[i]<<std::endl;
    }
    return 0;
}
