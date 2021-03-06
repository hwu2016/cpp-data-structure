#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList()
    :root(nullptr), tail(nullptr){}

LinkedList::~LinkedList(){};

//Add a node in the end
int LinkedList::append_last(int v)
{
    ListNode* p = new ListNode(v);
    if (!root)
    {
        this->root = p;
        this->tail = p;
    }
    else 
    {
        this->tail->next = p;
        this->tail = p;
    }
    return 0;
}

//Add a node in the front
int LinkedList::append_front(int v)
{
    ListNode* p = new ListNode(v);
    if (!root)
    {
        this->root = p;
        this->tail = p;
    }
    else 
    {
        p->next = this->root;
        this->root = p;
    }
    return 0;
}

//Insert a node at a specific index
//Index = 0 equals to the function append_front
int LinkedList::insert_at(int v, int index)
{
    ListNode* p = this -> root;
    if (index == 0)
    {
        this -> append_front(v);
        return 0;
    }
    while (index > 1)
    {
        if (!p) return 1;
        p = p -> next;
        index--;
    }
    ListNode* tmp = p -> next;
    p -> next = new ListNode(v);
    p -> next -> next = tmp;
    return 0;
}

//Remove the last node
int LinkedList::remove_last()
{
    ListNode* p = this -> root;
    if (!p -> next) return 1;
    while (p -> next -> next)
    {
        p = p -> next;
    }
    p -> next = nullptr;
    return 0;
}

//Remove the first node
int LinkedList::remove_front()
{
    if (!this -> root -> next) return 1;
    this -> root = root -> next;
    return 0;
}

int LinkedList::remove_at(int index)
{
    ListNode* p = this -> root;
    if(index == 0)
    {
        this -> remove_front();
    }
    while (index > 1)
    {
        p = p -> next;
        index--;
    }
    p -> next = p -> next -> next;
    return 0;
}

//remove the node where val equals the given value
void LinkedList::remove(int k)
{
    ListNode* head = this->root;
    ListNode* pre = nullptr;
    if (head == nullptr)
    {
        std::cout << "Empty LinkedList ERROR" << std::endl;
        return;
    }
    if (head->val == k)
    {
        this->root = this->root->next;
        return;
    }
    while (head->next)
    {
        pre = head;
        head = head -> next;
        if (head->val == k)
        {
            pre -> next = pre->next->next;
            return;
        }
    }
}

//return true if at least one element equals to the given value
bool LinkedList::find(int target)
{
    ListNode* p = this -> root;
    while (p)
    {
        if (p -> val == target) return true;
        p = p -> next;
    }
    return false;
}

//return the length of the linkedlist
int LinkedList::length()
{
    int l = 0;
    ListNode* p = this -> root;
    while (p)
    {
        p = p -> next;
        l++;
    }
    return l;
}

//Get the root of the linkedlist
ListNode* LinkedList::get_root()
{
    return this -> root;
}

//reverse a linkedlist
ListNode* LinkedList::reverse(ListNode* root)
{
    ListNode* p = this -> root;
    ListNode* pre = nullptr;
    ListNode* cur = p;
    while (cur)
    {
        ListNode* tmp = cur -> next;
        cur -> next = pre;
        pre = cur;
        cur = tmp;
    }
    this -> root = pre;
    return pre;
}

//print the current linkedlist
void LinkedList::print()
{
    ListNode* p = this -> root;
    if (!p -> next) {
        std::cout << p -> val << std::endl;
        return;
    }
    while (p -> next)
    {
        std::cout << p -> val << " -> ";
        p = p -> next;
    }
    std::cout << p -> val << std::endl;
}