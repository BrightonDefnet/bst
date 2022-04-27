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

    //display tree
    cout << "original:" << endl;
    t.newDisplay("", root, false);

    //search for 2
    bool b = t.search(root, 2);
    cout << (b ? "contained" : "not contained") << endl;

    //delete 2
    root = t.delNode(root, 2);
    cout << "\n after deleting:" << endl;
    t.newDisplay("", root, false);

    //search for 2
    b = t.search(root, 2);
    cout << (b ? "contained" : "not contained") << endl;
}
