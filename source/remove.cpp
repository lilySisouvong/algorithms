#include <iostream>

int main(){
    int gone = 1;
    int blue = 0;
    int Capacity = 5;
    char array[5] = {'h','e','l','l','o'};
    char* artisan =  new char[Capacity];
    for (int i = 0; i < Capacity; ++i){
        if ( i != gone){
            artisan[i] = array[i];
            blue += 1;
        }
    }
    for(int i =0; i < Capacity; ++i){
        std::cout<<artisan[i]<<std::endl;
    }

    return 0;
}