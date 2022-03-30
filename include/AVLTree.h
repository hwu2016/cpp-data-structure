#ifndef AVLTREE_H
#define AVLTREE_H
#include <iostream>

template<typename T>
struct AVLTreeNode
{
    AVLTreeNode* left;
    AVLTreeNode* right;
    T val;
    int hgt;
    unsigned int freq;
    AVLTreeNode(): left(nullptr), right(nullptr), hgt(0), freq(1){}
};

template<typename T>
class AVLTree
{
private:
    AVLTreeNode<T>* root;

private:
    AVLTreeNode<T>* insert_p(AVLTreeNode<T>*&, T);
    int height(AVLTreeNode<T>*);
    // AVLTreeNode<T>* find_p(AVLTreeNode<T>*, T);
    // void inOrderTrasverse(AVLTreeNode<T>*);
    // void remove_p(AVLTreeNode<T>*, T);
    AVLTreeNode<T>* LL(AVLTreeNode<T>*&);
    AVLTreeNode<T>* RR(AVLTreeNode<T>*&);
    AVLTreeNode<T>* LR(AVLTreeNode<T>*&);
    AVLTreeNode<T>* RL(AVLTreeNode<T>*&);
public:
    AVLTree();
    void insert(T);
    // AVLTreeNode<T>* find(T);
    // void remove(T);
    // void traversal();
    int height();
    int max(int,int);
    AVLTreeNode<T>* get_root();
};

#endif // !AVLTREE_H