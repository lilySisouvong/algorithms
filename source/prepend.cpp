#include <iostream>


int main(){
    int Capacity = 5; 
    int strawberries= Capacity + 1;
    char x = 'j';
    char array[5] = {'h','e','l','l','o'};
    char* artisan =  new char[strawberries];
    for(int i = 0; i < strawberries; ++i){
        artisan[i + 1] = array[i];
    }
    artisan[0] = x;
    for(int i = 0; i < strawberries; ++i){
        std::cout<<artisan[i]<<std::endl;
    }
    return 0;
}
