#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "string.hpp"
<<<<<<< HEAD
 
//default constructor 
String::String(){
    //Allocate space
    array = new char[1];
    //Add the null
    array [0] = '\0';
    //Adjust private variables
    Capacity = 0;

}

        //parameterized constructor
String::String (char* string){
    //get the length of the incoming string
    int length = 0;
    while (string[length]){
        ++length;
    }
    //allocate space for the string plus a null
    array = new char[length + 1];
    //fill our array up, includign the null
    for (int i = 0; i <= length; ++i){
        array[i] = string[i]; 
    }
    //adjust private variables 
    Capacity = length;


}

        //parameterized constructor
String::String (char string){
    //Allocate space
    array = new char[2];
    //add the character and the null 
    array[0] = string;
    array[1] = '\0';
    //adjust private variables;
    Capacity  = 1;
    }

        //destructor
String::~String(){
    delete[] array;
}

        /** at(int position)
         * Returns the character at the given position, throws an exception if the
         * position is out of bounds.
         * O(n)
         */
  char String::at(int x) const{
      if (x > Capacity || x < 0){
          throw "bad index";

      }
      else{
          return array[x];
      }
  }

        /** empty()
         * Returns whether or not the string is empty.
         * O(n)
         */
  bool String::empty() const{
      if (Capacity == 0){
          return true;
      }
    return false;
  };

        /** size()
         * Returns the number of characters in the string.
         * O(n)
         */
  unsigned int String::size() const{
        int length = 0;
        for(int i = 0; i < Capacity; ++i){
            length += 1;
        }

    return length;
  }

        /** capacity()
         * Returns the number of characters that the string can hold.
         * O(n)
         */
  unsigned int String::capacity() const{
      unsigned int length;
      if(String::size() == Capacity){
          length = (Capacity * 2) + 1;
      }
      return length;
  }

        /** reserve(int extra)
         * Reserves extra amount of characters, extending the capacity of the string.
         * O(n)
         */
  void String::reserve(unsigned int x){
      int cola = Capacity + x;
      char* uber= new char[cola];
      for (int i = 0; i < cola; ++i){
          uber[i]=array[i];
      }
      delete[] array;
      array = uber;
  }
    

        /** insert(char c, int index)
         * Inserts the given character `c` into the string at the given index.
         * If the index is out of bounds the character should appended / prepended.
         * O(n^2)
         */
  void String::insert(char c, int x){
      int length;
      int size;
      if ( x > Capacity){
          length = x - Capacity;
          size = Capacity + length;
          array[size]= c;
      }
      else if (x < 0){
          for(int i = Capacity; i > 0; --i){
              array[i]= array[i-1];
          }
          array[0] = c;
      }
      else{
          array[x] = c;
      }

  }

  /** erase(char)
   * Erases all copies of the given character from the string.
   * O(n)
   */
  void String::erase(char gone){
      int blue = 0; 
      int red = Capacity +1; 
      char* artisan =  new char[red];
      for (int i = 0; i < red; ++i){
          if(array[i]!=gone){
             artisan[i] = array[i];
             blue += 1;
          }
      }
      delete[] array;
      array = artisan;
      }


  /** remove(int index)
   * Removes the character at the given index.
   * O(n)
   */
  void String::remove(int x){
      int blue = 0; 
      char* artisan =  new char[Capacity];
      for (int i = 0; i < Capacity; ++i){
          if(i != x){
             artisan[i] = array[i];
             blue += 1;
          }
      delete[] array;
      array = artisan;  
  }
  }

  /** append(char)
   * Appends the given character to the string.
   * O(n)
   */
  void String::append(char addit){
      int blue = 0;
      int red = Capacity +1; 
      char* artisan =  new char[red];
      for(int i = 0; i < red; ++i){
          artisan [i] = array[i];
        }
       artisan [Capacity] = addit;
       delete[] array;
       array = artisan;

  }

  /** prepend(char)
   * Prepends the given character to the string.
   * O(n)
   */
  void String::prepend(char begin){
    int red = Capacity + 1;
    char* artisan =  new char[red];
    for(int i = 0; i < red; ++i){
        artisan[i + 1] = array[i];
    }
    artisan[0] = begin;
    delete[] array;
    array = artisan;
  }

  /** compare(char* or String)
   * Returns whether or not the string is equal with the one given.
   * O(n^3)
   */

  bool String::compare(char* string) const{
      int i = 0;
      int length;
      while (string[i] != '\0'){
          length += 1;
          i+= 1;
      }
      if (Capacity != length){
          return false;
      }
      else{
          for(int i = 0; i < Capacity; ++i){
              if (array[i] != string[i]){
                  return false;
              }
          }
      }
      return true;
  }

  /** concate(char* or String)
   * Concatenates the string with the given character array, or string.
   * O(?)
   */
  void String::concatenate(char* string){
  
  }

  /** find(char* or char or String)
   * Returns the index of the first occurrence of the character array, char, or
   * string given. Should return length if not found.
   * O(n^2)
   */
  unsigned int String::find(char look, int start = 0) const{
      unsigned int index = 0;
      for(int i = start; i < Capacity; ++i){
          if (array[i] == look){
              index = i;
          }
      }
      return index;
  }
  
  /** reverse()
   * Reverses the string in-place.
   * O(n)
   */
  void String::reverse(){
      int blue = 0;
      int red = Capacity-1;
      char* artisan = new char[Capacity];
      for(int i = red; i >= 0; --i){
        artisan[blue]=array[i];
        blue += 1;
      }
  }

  /** shift(int)
   * Shifts all characters ASCII values in the array upwards or downwards by the
   * amount given. This method should also prevent characters from becoming
   * null, or exceeding the ASCII range.
   * O(?)
   */
  void String::shift(int x);

  /** toInt()
   * Returns the string as an integer, if it can be represented as one.
   * Otherwise throws an exception
   * O(?)
   */
  int String::toInt() const;

  /** substr(start, end)
   * Returns the string contained between [start, end).
   * O(n)
   */
  String String::substr(int x, int y) const{
      int blue = 0;
      char* artisan = new char[Capacity];
      for(int i = x; i < y; ++i){
          artisan[blue]= array[i];
          blue+= 1;
      }
  }

};
=======
>>>>>>> upstream/master
