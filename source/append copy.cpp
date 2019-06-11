#include <iostream>

int main(){
    char gone = 'e';
    int Capacity = 5;
    int blue = 0;
    int red = Capacity +1; 
    char array[5] = {'h','e','l','l','o'};
    char* artisan =  new char[red];
    for(int i = 0; i < red; ++i){
        artisan [i] = array[i];
    }
    artisan [Capacity] = gone;
    for (int i = 0; i < red; ++i){
        std::cout<<artisan[i]<<std::endl;
    }

    return 0;
}