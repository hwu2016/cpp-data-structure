#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "ListNode.h"

class LinkedList
{
private:
    ListNode* root;

public:
    LinkedList(ListNode*);
    ~LinkedList();
    int append_last(int);
    int append_front(int);
    int insert_at(int, int);
    int remove_last();
    int remove_front();
    int remove_at(int);
    bool find(int);
    int length();
    ListNode* get_root();
    ListNode* reverse(ListNode*);
    void print();
};


#endif // !LINKEDLIST_H