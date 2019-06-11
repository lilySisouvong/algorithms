#include <iostream>

int main(){
    std::string x = "hello";
    char make[5] = {'h','e','l','l','o'};
    int i = 0;
    int length;
    while (x[i] != '\0'){
        length += 1;
        i+= 1;
      }
    int Capacity = 5;
    int Mac = length + Capacity;
    for (int i = Capacity; i < Mac; ++i){
        int j = 0;
        make[Capacity] = x[j];
        j += 1;
    }
    for (int i = 0; i < Mac; ++i){
        std::cout<<make[i]<<std::endl;
    }
    return 0;
}