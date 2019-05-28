#include <iostream>
using namespace std;


/** Logarithm
 * Takes the log of the base and the number and finds the exponent that relates base and number
 * O(n)
 */
int log(int base, int num){
    int result=0;
    int make = num;
    while (make/base >= 1){
        make = make/base;
        result = result +1;
    }
    return result;
};


int main(){
    cout<<log(5,25)<< endl;
    return 0;
}