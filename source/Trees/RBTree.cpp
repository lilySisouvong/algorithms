#include "RBTree.hpp"

RBTree::~RBTree(){
   clear(root);
}

bool RBTree::search(int data, Node* n){
    return true;
}

Node* RBTree::remove(int data, Node* n){
    return root;
}

void RBTree::clear(Node* n){
    
}

Node* RBTree::insert(int data, Node* n){
    if(!n){
        return new Node(data);
    }
    else if (data > n->data){
        n->right = insert(data,n->right);
    }
    else if(data < n->data){
        n->left = insert(data,n->left);
    }
    return n;
}


/** insert(int data)
   * Inserts the given data into the tree.
   * Does nothing if the data is already in the tree.
   */
void RBTree::insert(int data){
    if(root == nullptr){
        root = new Node(data);
        
    }
   root = insert(data, root);
    fix(root);
}

/** height()
   * Determines and returns the height of the tree.
   * Returns -1 if the tree is empty.
   */
int RBTree::height(){
    return 0;
}

/** clear()
   * Removes every element from the tree.
   */
void RBTree::clear(){

}

/** preorder()
   * Prints the contents of the tree to the ostream using a pre-order
   * traversal.
   */
void RBTree::preorder(std::ostream &oss){

}

/** inorder()
   * Prints the contents of the tree to the ostream using an in-order
   * traversal.
   */
void RBTree::inorder(std::ostream &oss){

}

/** postorder()
   * Prints the contents of the tree to the ostream using a post-order
   * traversal.
   */
void RBTree::postorder(std::ostream &oss){

}

void RBTree::deleteMax(){

}

void RBTree::deleteMin(){

}