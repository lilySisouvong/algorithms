<<<<<<< HEAD:source/String/string.cpp
#include "string.hpp"
<<<<<<< HEAD:source/string.cpp
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
}

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
    int yellow = Capacity + x;
    char* uber= new char[yellow];
    for (int i = 0; i < yellow; ++i){
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
   * O(n^2)
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
   * O(n^2)
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

bool String::compare(char*string) const{
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

   bool String::compare(String&) const{

   }

  /** concate(char* or String)
   * Concatenates the string with the given character array, or string.
   * O(?)
   */
  void String::concatenate(char*string){
  
  }
  
  void String::concatenate(String&){

}


  unsigned int String::find(char*, int start) const{

  }
 /** find(char* or char or String)
   * Returns the index of the first occurrence of the character array, char, or
   * string given. Should return length if not found.
   * O(n^2)
   */
unsigned int String::find(char look, int start) const{
    unsigned int index = 0;
    for(int i = 0; i < Capacity; ++i){
        if (array[i] == look){
            index = i;
        }
    }
    return index;
  }


  
unsigned int String::find(String&, int start) const{

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
void String::shift(int x){

}

  /** toInt()
   * Returns the string as an integer, if it can be represented as one.
   * Otherwise throws an exception
   * O(?)
   */
int String::toInt() const{

}

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


=======
=======
=======
#include "String.hpp"
>>>>>>> upstream/master:source/String/String.cpp
#include "../Functions/functions.hpp"
>>>>>>> upstream/master:source/String/string.cpp

// O(1)
String::String() {
  // Allocate space.
  array = new char[1];

  // Add the null.
  array[0] = '\0';

  // Adjust private variables.
  _capacity = 0;
}

// O(1)
String::String(char c) {
  // Allocate space.
  array = new char[2];

  // Add the character and the null.
  array[0] = c;
  array[1] = '\0';

  // Adjust private variables.
  _capacity = 1;
}

// O(n)
String::String(char* str) {
  // Get the length of the incoming string.
  int length = 0;
  while (str[length])
    ++length;

  // Allocate space for the string plus a null.
  array = new char[length + 1];

  // Fill our array up, including the null.
  for (int i = 0; i <= length; ++i)
    array[i] = str[i];

  // Adjust private variables.
  _capacity = length;
}

// O(1)
String::~String() {
  delete[] array;
}

// O(n)
char String::at(int index) const {
  // If our index is negative, or beyond the size of our array, we cannot return
  // anything.
  return (index < 0 || (unsigned int)index >= size()) ? throw "Index"
                                                      : array[index];
}

// O(n)
unsigned int String::size() const {
  int length = 0;
  while (array[length])
    ++length;
  return length;
}

// O(1)
bool String::empty() const {
  return !this->array[0];
}

// O(1)
unsigned int String::capacity() const {
  return this->_capacity;
}

// O(n)
void String::reserve(unsigned int n) {
  if (!n)
    return;

  // Make a new array.
  char* _array = new char[_capacity + n + 1]();

  // Fill it up.
  int length = this->size();
  for (int i = 0; i <= length; ++i)
    _array[i] = array[i];

  // Remove old memory.
  delete[] array;

  // Save new memory.
  array = _array;

  // Adjust private variables.
  _capacity += n;
  return;
}

// O(n)
void String::insert(char c, int index) {
  // Prepend and append as easy cases.
  if (index < 0)
    prepend(c);
  else if ((unsigned int)index >= size())
    append(c);
  else {
    // Increase capacity, if needed.
    if (this->size() == this->_capacity) {
      this->reserve(this->size() * 2);
    }
    // Move all elements after index over.
    for (int i = this->size() + 1; i >= index; --i)
      array[i] = array[i - 1];
    // Insert our new character.
    array[index] = c;
  }
  return;
}

// O(n)
void String::erase(char c) {
  // Create a new array.
  char* _array = new char[_capacity + 1];

  // Copy all non-erased characters to the new array.
  int length = size();
  for (int i = 0, j = 0; i <= length; ++i) {
    if (array[i] != c)
      _array[j++] = array[i];
  }

  // Remove the old array.
  delete[] array;
  array = _array;
  return;
}

// O(n)
void String::remove(int index) {
  // Copy all characters to the left, overwriting index.
  int length = this->size();
  for (int i = index; i < length; ++i)
    array[i] = array[i + 1];
  return;
}

// O(1) Amortized Cost due to doubling.
// More info:
// https://www.interviewcake.com/concept/java/dynamic-array-amortized-analysis
void String::append(char c) {
  unsigned int length = size();
  if (length == this->capacity()) {
    this->reserve(length * 2);
  }
  array[length] = c;
  array[length + 1] = 0;
  return;
}

// O(n)
void String::prepend(char c) {
  unsigned int length = size();
  if (length == this->capacity()) {
    this->reserve(length * 2);
  }
  for (int i = length + 1; i >= 0; --i)
    array[i] = array[i - 1];
  array[0] = c;
  return;
}

// O(n)
bool String::compare(char* str) const {
  int length = size();
  // Compare all the way up to the null.
  for (int i = 0; i <= length; ++i) {
    if (str[i] != array[i])
      return false;
  }
  return true;
}

// O(n)
bool String::compare(String& str) const {
  return this->compare(str.array);
}

// O(n)
void String::concatenate(char* str) {
  // Get our lengths.
  unsigned int strlen = 0, length = size();
  while (str[strlen])
    ++strlen;
  // Reserve the space/
  if (length + strlen > this->_capacity) {
    this->reserve(strlen);
  }
  // Copy things over.
  for (unsigned int i = length, j = 0; i <= length + strlen; ++i, ++j) {
    this->array[i] = str[j];
  }
  return;
}

// O(n)
void String::concatenate(String& str) {
  this->concatenate(str.array);
  return;
}

// O(n)
bool exact_match(char* a, char* b) {
  return (!b[0]) ? true : a[0] == b[0] && exact_match(a + 1, b + 1);
}

// O(n^2)
unsigned int String::find(char* str, int start) const {
  unsigned int i, length;
  for (i = start, length = size(); i < length; ++i) {
    if (exact_match(this->array + i, str))
      return i;
  }
  return i;
}

// O(n)
unsigned int String::find(char c, int start) const {
  unsigned int i, length;
  for (i = start, length = size(); i < length; ++i)
    if (array[i] == c)
      return i;
  return i;
}

// O(n^2)
unsigned int String::find(String& str, int start) const {
  return this->find(str.array, start);
}

// O(n)
void String::reverse() {
  int length = size() - 1;
  for (int i = 0; i < length / 2; ++i) {
    array[i] ^= array[length - i];
    array[length - i] ^= array[i];
    array[i] ^= array[length - i];
  }
  return;
}

// O(n)
void String::shift(int n) {
  int length = size();
  for (int i = 0; i < length; ++i) {
    array[i] = array[i] + n % 255;
    if (!array[i])
      ++array[i];
  }
  return;
}

// O(n)
int String::toInt() const {
  int len = size();
  int out = 0;

  for (int i = 0; i < len; ++i) {
    out += chartoint(array[len - i - 1]) * pow(10, i);
  }

  return out;
}

// O(n) since append is O(1) amortized.
String String::substr(int start, int end) const {
  String ret;
  for (int i = start; i < end; ++i)
    ret.append(array[i]);
  return ret;
}
>>>>>>> upstream/master
