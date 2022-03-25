#ifndef BST_H
#define BST_H

#include "TreeNode.h"
#include <vector>


class BinarySearchTree
{
private:
    TreeNode* root;


public:
    BinarySearchTree(TreeNode*);
    ~BinarySearchTree();
    int insert(TreeNode*);
    bool find(int);
    int depth(TreeNode*);
    std::vector<int> list();
    int size();
};


#endif // !BST_H

