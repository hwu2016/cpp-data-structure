#include <iostream>
#include "BinarySearchTree.h"
#include "TreeNode.h"
#include "LinkedList.h"
#include "ListNode.h"
#include "Stack.h"
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

void testLinkedList()
{
    ListNode* node = new ListNode(5);
    LinkedList ll(node);
    log("##################################");
    log("########### Linked List ##########");
    log("##################################");
    log("----Testing Appending----");
    ll.print();
    ll.append_last(7);
    ll.print();
    ll.append_last(1);
    ll.print();
    ll.append_front(-3);
    ll.print();
    ll.append_front(4);
    ll.print();
    ll.insert_at(9, 2);
    ll.print();
    log("----Testing Removal----");
    ll.remove_front();
    ll.print();
    ll.remove_last();
    ll.print();
    ll.remove_at(2);
    ll.print();
    log("----Testing Finding----");
    log(ll.find(7) ? "True" : "False"); 
    log(ll.find(-1) ? "True" : "False");
    log("----Testing Length----");
    log(ll.length());
    log("----Testing Reverse----");
    ll.reverse(ll.get_root());
    ll.print();
}

void testStack()
{
    Stack<int> st;
    log("##################################");
    log("############# Stack ##############");
    log("##################################");
    log("----Testing Empty----");
    st.print();
    log(st.empty() == 1 ? "True" : "False");
    log("----Testing Push----");
    st.push(1);
    st.print();
    st.push(3);
    st.print();
    st.push(5);
    st.print();
    st.push(7);
    st.print();
    log("----Testing Pop----");
    st.pop();
    st.print();
    log("----Testing Top----");
    log(st.top());
    log("----Testing Search----");
    log(st.search(2));
    log(st.search(3));
}

int main()
{
    // testBST();
    // testLinkedList();
    testStack();
    return 0;
}