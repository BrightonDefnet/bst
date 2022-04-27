#include "Tree.h"

Tree::Tree(){}

Tree::Tree(int i){
    value = i;
    left = right = NULL;
}

///insert a number into the tree
Tree* Tree::insert(Tree* root, int val) {
    if(!root) {
        return new Tree(val);
    }
    if(val > root->value) {
        root->right = insert(root->right, val);
    }
    else {
        root->left = insert(root->left, val);
    }
    return root;
}

///display the numbers in order
void Tree::display(Tree* root) {
    if(!root) {
        return;
    }
    display(root->left);
    cout << root->value << endl;
    display(root->right);
}
