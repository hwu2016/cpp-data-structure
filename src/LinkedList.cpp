#include "LinkedList.h"

LinkedList::LinkedList(ListNode* node)
    :root(node){}

LinkedList::~LinkedList()
{
    delete this->root;
}

int LinkedList::append_last(int v)
{
    ListNode* p = this->root; 
    while(p -> next)
    {
        p = p -> next;
    }
    p -> next = new ListNode(v);
    return 0;
}

int LinkedList::append_front(int v)
{
    ListNode* p = this -> root;
    if (!p) return 1;
    ListNode* q = new ListNode(v);
    q->next = p;
    this -> root = q;
    return 0;
}

int LinkedList::insert_at(int v, int index)
{
    
}