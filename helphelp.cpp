#include <iostream>

int main(){
    char make[5] = {'h','e','l','l','o'};
    for(int i = 5; i > 0; --i){
        make[i]= make[i-1];
    }
    make[0]= 'w';

    for(int i = 0; i < 7; i++){
        std::cout<<make[i]<<std::endl;
    }
    return 0;
}