#include "AVLTree.h"
#include <iomanip>

template<typename T>
AVLTree<T>::AVLTree(): root(nullptr){}

template<typename T>
int AVLTree<T>::height(AVLTreeNode<T>* node)
{
    if (node != nullptr) return node->hgt;
    return 0;
}

template<typename T>
int AVLTree<T>::height()
{
    return height(root);
}

template<typename T>
int AVLTree<T>::max(int cmpa, int cmpb)
{
    return cmpa > cmpb ? cmpa : cmpb;
}

template<typename T>
AVLTreeNode<T>* AVLTree<T>::LL(AVLTreeNode<T>* &k2)
{
    AVLTreeNode<T>* k1;
    k1 = k2 -> left;
    k2->left = k1 -> right;
    k1 -> right = k2;

    k2->hgt = max(height(k2->left), height(k2->right)) + 1;
    k1->hgt = max(height(k1->left), k2->hgt) + 1;

    return k1;
}

template<typename T>
AVLTreeNode<T>* AVLTree<T>::RR(AVLTreeNode<T>* &k2)
{
    AVLTreeNode<T>* k1;
    k1 = k2 -> right;
    k2->right = k1 -> left;
    k1 -> left = k2;

    k2->hgt = max(height(k2->left), height(k2->right)) + 1;
    k1->hgt = max(height(k1->right), k2->hgt) + 1;
    return k1;
}

template<typename T>
AVLTreeNode<T>* AVLTree<T>::LR(AVLTreeNode<T>* &k3)
{
    k3->left = RR(k3->left);
    return LL(k3);
}

template<typename T>
AVLTreeNode<T>* AVLTree<T>::RL(AVLTreeNode<T>* &k3)
{
    k3->right = LL(k3->right);
    return RR(k3);
}

template<typename T>
AVLTreeNode<T>* AVLTree<T>::insert_p(AVLTreeNode<T>* &node, T x)
{
    if (node==nullptr)
    {
        // node = new AVLTreeNode<T>(x, nullptr, nullptr);
        node = new AVLTreeNode<T>();
        node -> val = x;
        if (node == nullptr) return nullptr;
    }
    if (node->val > x)
    {
        node->left = insert_p(node->left, x);
        if(height(node->left) - height(node->right) == 2)
        {
            if (x < node->left->val)
                node = LL(node);
            else
                node = LR(node);
        }
    }
    else if (node->val < x)
    {
        node -> right = insert_p(node->right, x);
        if (height(node->right) - height(node->left) == 2)
        {
            if (x > node -> right -> val)
                node = RR(node);
            else
                node = RL(node);
        }
    }
    else ++(node->freq);
    node->hgt = max(height(node->left), height(node->right)) + 1;
    return node;
}

template<typename T>
void AVLTree<T>::insert(T x)
{
    insert_p(root, x);
}

template<typename T>
AVLTreeNode<T>* AVLTree<T>::get_root()
{
    return root;
}

template class AVLTree<int>;