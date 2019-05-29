#include <iostream>
using namespace std;


 bool all(bool arr[], int n){
     for(int i = 0; i <n; ++i){
         if(arr[i] == false){
             return false;
         }
     }
     return true;
 }

 int main(){
    bool arr3[6] = {true, true, true, true, true, true};
    bool hello = all(arr3,6);
    if (hello == true){
        cout<< "YES girl"<< endl;
    }
    else{
        cout<< "NO girl" << endl;
    }
return 0;
 }
