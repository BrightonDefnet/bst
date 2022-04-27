/*
 * Binary Search Tree
 * Brighton Defnet 2022
 * creates a binary search Tree
 */

#include <iostream>
#include "Tree.h"
using namespace std;

int main() {
    Tree t;
    Tree* root = NULL;
    root = t.insert(root, 50);
    t.insert(root, 40);
    t.insert(root, 10);
    t.insert(root, 57);
    t.insert(root, 1);
    t.display(root);
    root = t.delNode(root, 10);
    t.display(root);
}
