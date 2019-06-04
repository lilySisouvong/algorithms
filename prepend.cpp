#include <iostream>

int main(){
    int Capacity = 5; 
    int strawberries= Capacity + 1;
    char x = 'j';
    char array[5] = {'h','e','l','l','o'};
    for(int i = strawberries; i > 0; --i){
        array[i] = array[i-1];
      }
    array[0] = x;
    for(int i = 0; i <= strawberries; ++i){
        std::cout<<array[i]<<std::endl;
    }
    return 0;
}
