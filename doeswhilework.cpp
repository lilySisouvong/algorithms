#include <iostream>

bool compare(std::string x, char* array, int Capacity, int length){
if (Capacity != length){
          return false;
      }
else{
    for(int i = 0; i < Capacity; ++i){
        if (array[i] != x[i]){
            return false;
            }
        }
    }
    return true;
  }
  


int main(){
    std::string x = "hi";
    char array[5] = {'h','e','l','l','o'};
    int Capacity = 5;
    int i = 0;
    int counter;
    while (x[i]!= '\0'){
        counter += 1;
        i += 1;
    }
    bool make = compare(x,array,Capacity, counter);
    std::cout<<make<<std::endl;
    return 0;
}