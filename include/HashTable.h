#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <vector>
#include "LinkedList.h"

class HashTable
{
private:
    int size;
    std::vector<LinkedList*> T;

public:
    HashTable();
    ~HashTable();
    int h(int);
    bool find(int);
    void insert(int);
    void remove(int);
    void print();
};

#endif // !HASHTABLE_H
