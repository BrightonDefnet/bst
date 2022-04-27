#ifndef TREE_H
#define TREE_H
#include <iostream>
using namespace std;

class Tree {
    public:
        Tree();
        Tree(int);
        Tree* insert(Tree*, int);
        void display(Tree*);
        void newDisplay(string, Tree*, bool);
        Tree* delNode(Tree*, int);
        bool search(Tree*, int);

    private:
        int value;
        Tree* left;
        Tree* right;
};
#endif
