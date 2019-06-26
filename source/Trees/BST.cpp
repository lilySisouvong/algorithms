#include "BST.hpp"

BST::BST(){
    root = nullptr;
}
BST::~BST(){
    return;
}

/** insert(int data)
   * Inserts the given data into the tree.
   * Does nothing if the data is already in the tree.
   */
void BST::insert(int data){
    Node* p = root;
    Node* ins = new Node(data);
    if(search(data)) throw "Already in tree!";
    if (is_empty()){
        root = ins;
        ins->left = nullptr;
        ins->right = nullptr;
    }
    while(p!=nullptr){
        if(data>p->data) p=p->right;
        else p = p->left;
    }
    if(data>p->data){
        p->right = ins;
        ins->right = nullptr;
        ins->left = nullptr;  
    }
    else{
        p->left = ins;
        ins->right = nullptr;
        ins->left = nullptr;   
    }
}

/** is_empty()
   * Returns true if the tree is empty and false otherwise
   */
bool BST::is_empty(){
    return (root == nullptr);
}

/** search(int data)
   * Searches the tree for the given data, returning true if the data
   * is found and false otherwise.
   */
bool BST::search(int data){
    Node* p = root;
    return(root->data==data);
    while(p!=nullptr){
        if(data>p->data) p= p->right;
        else if(data == p->data) return true;
        else p = p->left;
    }
    return 0;
}

/** height()
   * Determines and returns the height of the tree.
   * Returns -1 if the tree is empty.
   */
int max(int a, int b){
    return(a>b)? a: b;
}

int BST::height(Node* n){
    return (!n) ? -1:1+ max(height(n->left), height(n->right));
}

int BST::height(){
    return height(root);
}

void BST::remove(int data){

}

void BST::clear(){

}
void BST::preorder(std::ostream& oss){

}

void BST::inorder(std::ostream& oss){

}

void BST::postorder(std::ostream& oss){

}
