#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "string.hpp"
 
//default constructor 
String::String(){
    //Allocate space
    array = new char[1];
    //Add the null
    array [0] = '\0';
    //Adjust private variables
    Capacity = 0;
//HELP!!! Does capacity count '\0' as an element in the array -- it doesn't
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
         * O(?)
         */
  char String::at(int x) const{
      if (x > Capacity || x < 0){
          throw "bad index";
//HELPP!!! what do I return 
      }
      else{
          return array[x];
      }
  }

        /** empty()
         * Returns whether or not the string is empty.
         * O(?)
         */
  bool String::empty() const{
      if (Capacity == 0){
          return true;
      }
    return false;
  };

        /** size()
         * Returns the number of characters in the string.
         */
  unsigned int String::size() const{
        //takes the string given 
        //do a while loop until '\0' (null)
        //while (string[i] != '\0'){
        //have a counter variable that adds one every loop
        //return counter
        //to make a new array char* new+array=new char[variable for space]
        //make a for loop 

    return Capacity;
  }

        /** capacity()
         * Returns the number of characters that the string can hold.
         * O(?)
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
         * O(?)
         */
  void reserve(unsigned int x);
        //HELP!!!! what is the point of this function?--already explained
        //Make a new array with added space and elements from previous array
        //New variable for Capacity
        //New variable for how long the space would be

        /** insert(char c, int index)
         * Inserts the given character `c` into the string at the given index.
         * If the index is out of bounds the character should appended / prepended.
         * O(?)
         */
  void String::insert(char c, int x){
      int length;
      int size;
      int turtles = Capacity;
      if ( x > turtles){
          length = x - turtles;
          size = turtles + length;
          array[size]= c;
      }
      else if (x < 0){
          for(int i = turtles; i > 0; --i){
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
   * O(?)
   */
  void String::erase(char gone){
      for(int i = 0; i < Capacity; ++i){
          if (array[i]== gone){
              array[i]= '\0';
          }
      }
//HELP!! In the test cases the parameter is char* and in the declarations it's char
  }

  /** remove(int index)
   * Removes the character at the given index.
   * O(?)
   */
  void String::remove(int x){
      array[x]= '\0';
  }
//HELP!!! Is this supposed to happen?

  /** append(char)
   * Appends the given character to the string.
   * O(?)
   */
  void String::append(char addit){
    int strawberries= Capacity + 1;
    array[strawberries] = addit;
  }

  /** prepend(char)
   * Prepends the given character to the string.
   * O(?)
   */
  void String::prepend(char begin){
      for(int i = Capacity; i > 0; --i){
          array[i]= array[i-1];
      }
      array[0] = begin;
  }

  /** compare(char* or String)
   * Returns whether or not the string is equal with the one given.
   * O(?)
   */
//Help!! Do you really mean 'or'?
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
    int length; 
    int i = 0;
    while (string[i] != '\0'){
        length += 1;
        i+= 1;
      }
    int Mac = length + Capacity;
    for (int i = Capacity; i < Mac; ++i){
        int j = 0;
        array[Capacity] = string[j];
        j += 1;
    }
  }
//HELP!!! tacobell.cpp keeps giving me Segmentation fault 11;

  /** find(char* or char or String)
   * Returns the index of the first occurrence of the character array, char, or
   * string given. Should return length if not found.
   * O(?)
   */
  unsigned int String::find(char look, int start = 0) const{
      for(int i = 0; i < Capacity; ++i){
          if (array[i] == look){
              return i;
          }
      }
  }
  

  /** reverse()
   * Reverses the string in-place.
   * O(?)
   */
  void reverse();

  /** shift(int)
   * Shifts all characters ASCII values in the array upwards or downwards by the
   * amount given. This method should also prevent characters from becoming
   * null, or exceeding the ASCII range.
   * O(?)
   */
  void shift(int);

  /** toInt()
   * Returns the string as an integer, if it can be represented as one.
   * Otherwise throws an exception
   * O(?)
   */
  int toInt() const;

  /** substr(start, end)
   * Returns the string contained between [start, end).
   * O(?)
   */
  String substr(int, int) const;
};