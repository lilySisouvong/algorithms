#include "String.hpp"

int helper(int x){
    return (x+5) % 60;
}

    String::String(){
    //make an empty array on the heap
    array = new char[1];
    array[0] = '\0';
    }

    String::String(const char*){
    //make...
    unsigned length;
    for (length = 0; str[length]; ++length);
    array = new char[length + 1];
    for (i = 0; i <= length; ++i) 
        array[i] = stri[i];
    }

    String::~String(){
        delete[] array;
    }

    unsigned int String:: length(){
        unsigned int length = 0;
        for(length; array[length]; ++length)
        return length;
    }

    void String:: append(const char){
        char * new_array = new charlength[]
    }