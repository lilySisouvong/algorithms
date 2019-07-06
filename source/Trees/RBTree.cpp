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

Node* RBTree::fix(Node* temp){
    if(temp->left->color==1 && temp->left->left->color==1){
        rotateRight(temp);
    }
    if(temp->right->color==1 && temp->left->color == 0){
        rotateLeft(temp);
    }
    if(temp->left->color==1 && temp->right->color==1){
        flipColors(temp);

    }
    return temp;
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
    Node* p = new Node(data);
    if(root == nullptr){
        root = new Node(data);
    }
   root = insert(data, root);
   fix(root);
}

void swap(int* y, int* x) {
  int temp;
  temp = *y;
  *y = *x;
  *x = temp;
}


Node* RBTree::remove(int data, Node* n){
    Node* temp = n;
    if(n->data == data){
        n = n->right;
        while(n->left){
            n = n->left;
        }
        swap(temp->data, n->data);
        removeMin(temp->right);
        return n;
    }
    else if(data < n->data){
        remove(data,n->left);
    }
    else if(data > n->data){
        remove(data, n->right);
    }
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
    root = deleteMax(root);
    root->color = 0;
}

Node* RBTree::deleteMax(Node* temp){
    if(temp->left && temp->left->color){
        temp = rotateRight(temp);
    }
    if(temp->right == nullptr){
        delete temp;
        return nullptr;
    }
    if(temp->right && temp->right->color!= 1 && temp->right->left && temp->right->left->color != 1){
        

    }
}


void RBTree::deleteMin(){

}