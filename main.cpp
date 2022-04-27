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
    root = t.insert(root, 8);
    t.insert(root, 5);
    t.insert(root, 2);
    t.insert(root, 6);
    t.insert(root, 10);
    t.insert(root, 9);
    t.insert(root, 11);

    cout << "original:" << endl;
    t.newDisplay("", root, false);
    cout << "\n after deleting:" << endl;
    root = t.delNode(root, 2);
    t.newDisplay("", root, false);
}
