#include <iostream>

int main(){
    int Capacity = 5;
    int blue = 0;
    char array[5] = {'h','e','l','l','o'};
    char* artisan = new char[Capacity];
    for(int i = Capacity-1; i >= 0; --i){
        artisan[blue]=array[i];
        blue += 1;
    }

    for(int i = 0; i<Capacity; ++i){
        std::cout<< artisan[i]<<std::endl;
    }
    return 0;
}
