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
        Tree* delNode(Tree*, int);

    private:
        int value;
        Tree* left;
        Tree* right;
};
#endif
