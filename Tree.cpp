#include "Tree.h"

Tree::Tree(){}

Tree::Tree(int i){
    value = i;
    left = right = NULL;
}

///insert a number into the tree
Tree* Tree::insert(Tree* root, int val) {
    if(!root) { //null
        return new Tree(val);
    }
    if(val > root->value) { //value is greater than node
        root->right = insert(root->right, val);
    }
    else { //value is less than node
        root->left = insert(root->left, val);
    }
    return root;
}

///display the numbers in order
void Tree::display(Tree* root) {
    if(!root) { //null
        return;
    }
    //recursively print the contents of the tree
    display(root->left);
    cout << root->value << endl;
    display(root->right);
}

///delete a node
Tree* Tree::delNode(Tree* root, int val) {
    if(root == NULL) { //null
        return root;
    }
    if(val < root->value) { //if smaller than root
        root->left = delNode(root->left, val);
    }  else if(val > root->value) { //if larger than root
        root->right = delNode(root->right, val);
    } else { //if equal to root
        if(root->left == NULL && root->right == NULL) { //node has no child
            return NULL;
        } else if(root->left == NULL) { //node has one (left) child
            Tree* temp = root->right;
            delete root;
            return temp;
        } else if(root->right == NULL) { //node has one (right) child
            Tree* temp = root->left;
            delete root;
            return temp;
        }
        //node has two children
        Tree* temp;
        while(temp && temp->left != NULL) {
            temp = temp->left;
        }
    }
    return root;
}
