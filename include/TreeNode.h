#ifndef TREENODE_H
#define TREENODE_H

class TreeNode
{
public:
    TreeNode* left;
    TreeNode* right;
    int val;
public:
    TreeNode();
    TreeNode(int);
    TreeNode(TreeNode*, TreeNode*, int);
    ~TreeNode();
};

#endif // !TREENODE_H