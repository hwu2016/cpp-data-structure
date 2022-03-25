#include <iostream>
#include "BinarySearchTree.h"
#include "TreeNode.h"
#include <vector>

template<typename T>
void log(T msg)
{
    std::cout << msg << std::endl;
}

void testBST()
{
    TreeNode* root = new TreeNode(10);
    BinarySearchTree bst(root);
    log("##################################");
    log("####### Binary Search Tree #######");
    log("##################################");
    log("----Testing Insert----");
    log(bst.insert(new TreeNode(3)) == 0 ? "Insert Success" : "FAIL");
    log(bst.insert(new TreeNode(5)) == 0 ? "Insert Success" : "FAIL");
    log(bst.insert(new TreeNode(13)) == 0 ? "Insert Success" : "FAIL");
    log(bst.insert(new TreeNode(11)) == 0 ? "Insert Success" : "FAIL");
    log(bst.insert(new TreeNode(9)) == 0 ? "Insert Success" : "FAIL");
    log("----Testing Depth----");
    log(bst.depth(root));
    log("----Testing Finding Element----");
    log(bst.find(5) > 0 ? "TRUE" : "FALSE");
    log(bst.find(6) > 0 ? "TRUE" : "FALSE");
    log("----Testing Listing----");
    std::vector<int> v = bst.list();
    for (auto x : v)
    {
        std::cout << x << ",";
    }
    log("");
    log("----Testing Size----");
    log(bst.size());
}

int main()
{
    testBST();
    return 0;
}