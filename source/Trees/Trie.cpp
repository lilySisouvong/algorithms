#include "Trie.hpp"
<<<<<<< HEAD

Trie::Trie(){
    root = nullptr;
}

Trie::~Trie(){
    clear(root);
}

/** insert(char* word)
   * Inserts word with the associated val into the Trie.
   * If the word is already in the tree, its value is replaced with val.
   * Increases height_upper_bound to word length if
   * word length > height_upper_bound.
   */
void Trie::insert(const char* word, int val){

}

  /** count()
   * Returns the number of word in the Trie.
   */
int Trie::count(){
    return 0;
}

  /** search(char* word)
   * Searches for word in the Trie, returning true if found and false otherwise.
   */
bool Trie::search(const char* word){
    return true;
}

  /** get(char* word)
   * Searches for word in the Trie and returns its value.
   * Throws an error if word is not found.
   */
int Trie::get(const char* word){
    return 0;
}

  /** remove(char* word)
   * Searches for word in the tree and remove it if found.
   * Throws an error if word is not found.
   */
void Trie::remove(const char* word){

}

  /** clear()
   * Removes all words from the Trie.
   * Sets height_upper_bound back to zero.
   */
void Trie::clear(){

}

  /** print()
   * Prints the Trie's key-value (string-int) pairs to the ostream in
   * alphabetical order.
   * The key and value of each pair are separated by a space, and each pair is
   * separated by the newline character.
   * Size of letters array for call to recursive print should be
   * height_upper_bound
   */
void Trie::print(std::ostream& oss = std::cout){

}



/** Trie (Prefix Tree)
 * A class that stores strings and associated ints as a tree of letter nodes,
 * where each path down the tree contains the letters of a string or substring.
 * The value associated with the string is stored in the node representing the
 * last letter of the string.
 * If the value of a Node is null the string is not in the tree.
 * Allows for efficient insert and search/data access methods.
 * Assumes all words are lowercase.
 */

  /** remove(const char* word, Node* n)
   * Recursively searches the Trie for word, and then deletes every node used
   * exclusively by that word (i.e. all nodes with end_of_word false and all
   * null pointers in children array coming out of recursion).
   * Returns null if n was deleted, and n otherwise
   */
 Node* Trie::remove(const char* word, Node* n){

 }

  /** clear(Node* n)
   * Recursively deletes all of the nodes in the subtree rooted at n, and then
   * deletes n.
   */
void Trie::clear(Node* n){

}

  /** print(std::ostream& oss, Node* n, char* letters, int level)
   * Recursively traverses the Trie with a depth-first search, printing each
   * word to the ostream in alphabetical order. All the letters from the root
   * to n are stored in the variable "letters", and the current level in the
   * Trie is stored in the variable "level".
   */
void Trie::print(std::ostream& oss, Node* n, char* letters, int level){

=======
#include "../Functions/functions.hpp"

// O(1)
Trie::Trie() {
  root = new Node(0, false);
  size = 0;
}

// O(height)
Trie::~Trie() {
  clear(root);
}

// O(1) since we maintain size.
int Trie::count() {
  return size;
}

// O(word)
void Trie::put(const char* word, int val) {
  int idx;
  Node* n = root;
  for (int i = 0; word[i]; ++i) {  // O(word)
    idx = word[i] - 'a';
    if (n->children[idx]) {  // O(1)
      n = n->children[idx];
    } else {  // O(1)
      Node* next = new Node(0, false);
      n->children[idx] = next;
      n = n->children[idx];
    }
  }
  n->end_of_word = true;
  n->value = val;
  ++size;
}

// O(word) but is normally sublinear for a miss.
bool Trie::search(const char* word) {
  Node* n = root;
  for (int i = 0; word[i]; ++i) {
    if (!(n->children[word[i] - 'a']))
      return false;
    else
      n = n->children[word[i] - 'a'];
  }
  if (n->end_of_word)
    return true;
  else
    return false;
}

// O(word) but is normally sublinear for a miss.
int Trie::get(const char* word) {
  Node* n = root;
  for (int i = 0; word[i]; ++i) {
    if (n->children[word[i] - 'a'])
      n = n->children[word[i] - 'a'];
    else
      throw "Key not found.";
  }
  if (n->end_of_word)
    return n->value;
  else
    throw "Key not found.";
}

// O(word)
Node* Trie::remove(const char* word, Node* n) {
  if (!word[0]) {
    if (!n->end_of_word)
      throw "Key not found.";
    n->end_of_word = false;
    --size;
  } else {
    if (!n)
      throw "Key not found.";
    int idx = word[0] - 'a';
    n->children[idx] = remove(word + 1, n->children[idx]);
  }
  if (!n->end_of_word && !any(n->children, n->R)) {
    delete n;
    return nullptr;
  }
  return n;
}

void Trie::remove(const char* word) {
  root = remove(word, root);  // O(word)
  if (!root)
    root = new Node(0, false);  // O(1)
}

// O(R * height)
void Trie::clear(Node* n) {
  for (int i = 0; i < n->R; ++i) {
    if (n->children[i]) {
      clear(n->children[i]);
    }
  }
  delete n;
}

// O(R * height)
void Trie::clear() {
  clear(root);                // O(R * height)
  root = new Node(0, false);  // O(1)
  size = 0;                   // O(1)
}

// O(R * height)
void Trie::print(std::ostream& oss, Node* n, String& letters) {
  if (n->end_of_word) {
    oss << letters << ' ' << n->value << std::endl;
  }

  for (int i = 0; i < n->R; ++i) {  // O(R)
    if (n->children[i]) {
      letters.append('a' + i);
      print(oss, n->children[i], letters);  // O(height)
      letters.pop_back();
    }
  }
}

// O(R * height)
void Trie::print(std::ostream& oss) {
  String letters;
  print(oss, root, letters);
>>>>>>> upstream/master
}