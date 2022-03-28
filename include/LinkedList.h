#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(){}
    ListNode(int val): val(val) {}
    ~ListNode(){}
};

class LinkedList
{
private:
    ListNode* root;
    ListNode* tail;

public:
    LinkedList();
    ~LinkedList();
    int append_last(int);
    int append_front(int);
    int insert_at(int, int);
    int remove_last();
    int remove_front();
    int remove_at(int);
    void remove(int);
    bool find(int);
    int length();
    ListNode* get_root();
    ListNode* reverse(ListNode*);
    void print();
};


#endif // !LINKEDLIST_H