#include <iostream>
#include "BinarySearchTree.h"
#include "LinkedList.h"
#include "Stack.h"
#include "HashTable.h"
#include <vector>

template <typename T>
void log(T msg)
{
    std::cout << msg << std::endl;
}

void testBST()
{
    BinarySearchTree* bst = new BinarySearchTree();
    log("##################################");
    log("####### Binary Search Tree #######");
    log("##################################");
    log("----Testing Insert----");
    log(bst->insert(10) == 0 ? "Insert Success" : "FAIL");
    log(bst->insert(3) == 0 ? "Insert Success" : "FAIL");
    log(bst->insert(5) == 0 ? "Insert Success" : "FAIL");
    log(bst->insert(13) == 0 ? "Insert Success" : "FAIL");
    log(bst->insert(11) == 0 ? "Insert Success" : "FAIL");
    log(bst->insert(9) == 0 ? "Insert Success" : "FAIL");
    log(bst->insert(9) == 0 ? "Insert Success" : "FAIL");
    log("----Testing Depth----");
    log(bst->depth(bst->get_root()));
    log("----Testing Finding Element----");
    log(bst->find(5) > 0 ? "TRUE" : "FALSE");
    log(bst->find(6) > 0 ? "TRUE" : "FALSE");
    log("----Testing Listing----");
    std::vector<int> v = bst->list();
    for (auto x : v)
    {
        std::cout << x << ",";
    }
    log("");
    log("----Testing Size----");
    log(bst->size());
}

void testLinkedList()
{
    LinkedList ll;
    log("##################################");
    log("########### Linked List ##########");
    log("##################################");
    log("----Testing Appending----");
    ll.append_last(5);
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

void testHashTable()
{
    HashTable *ht = new HashTable();
    log("##################################");
    log("############ HashTable ###########");
    log("##################################");
    log("----Testing Insert----");
    ht->insert(3);
    ht->insert(10);
    ht->insert(104);
    ht->insert(105);
    ht->insert(10);
    ht->insert(205);
    ht->print();
    log("----Testing Remove----");
    ht->remove(104);
    ht->remove(10);
    ht->remove(7);
    ht->print();
}

int main()
{
    // testStack();
    testBST();
    // testLinkedList();
    // testHashTable();
    return 0;
}