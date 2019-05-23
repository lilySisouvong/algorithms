#include <iostream>

bool palidrome(char*);

int main (){
    char*str = "Hello, World!";
    std:: cout<< palidrome(word)<<std::endl;

    return 0;
}
bool palidrome(char *str){
    int length;
    for (length = 0; str[length]; ++length)
    for (int i=0; i< length/2; ++i){
        if (str[i] != str[length - i -1]
            return false    
    }
    return true;
}
//prefix increment ++x
    //think x = x+1 or x+=1
    //return x;

//postfix increment x++
    /*
    int temp =x;
    x = x+1;
    return temp;
    */ 