#ifndef STACK_H
#define STACK_H
#include <deque>

template<typename T>
class Stack
{
public: 
    std::deque<T> container;
public:
    int size();
    bool empty();
    void push(T);
    T pop();
    T top();
    int search(T);
    void print();
};

#endif // !STACK_H
