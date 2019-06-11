#include <iostream>

void callit(char* array,int x, char van){
    array[x] = van;
    for(int i =0; i < x; ++i){
        std::cout<< array[i]<<std::endl;
    }
}

int main(){
    int Capacity = 5;
    int Straw = Capacity + 1;
    char x = 'r';
    char make[5] = {'h','e','l','l','o'};

    callit(make, Straw, x);

    
    return 0;
}
