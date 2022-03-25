#include "TreeNode.h"

TreeNode::TreeNode()
    :left(nullptr), right(nullptr), val(0) {}

TreeNode::TreeNode(int val)
    :left(nullptr), right(nullptr), val(val) {}

TreeNode::TreeNode(TreeNode* left, TreeNode* right, int val)
    :left(left), right(right), val(val) {}

TreeNode::~TreeNode()
{
    delete left;
    delete right;
}



