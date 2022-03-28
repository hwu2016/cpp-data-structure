#include "HashTable.h"
#include <vector>
#include <iostream>

HashTable::HashTable()
{
    this->T = std::vector<LinkedList *>(101);
    for (int i = 0; i < this->T.size(); i++)
    {
        this->T[i] = new LinkedList();
    }
    this->size = 101;
}

HashTable::~HashTable() {}

int HashTable::h(int k)
{
    return k % this->size;
}

bool HashTable::find(int k)
{
    int i = this->h(k);
    return this->T[i]->find(k);
}

void HashTable::insert(int k)
{
    int i = this->h(k);
    if (this->find(k))
    {
        std::cout << "Duplicate Insertion." << std::endl;
    }
    else
    {
        this->T[i]->append_last(k);
        std::cout << "Insert " << k << " Success!" << std::endl;
    }
}

void HashTable::remove(int k)
{
    if (!this->find(k))
    {
        std::cout << "No Such Element" << std::endl;
    }
    else
    {
        int i = this->h(k);
        this->T[i]->remove(k);
        std::cout << "Remove " << k << " Success!" << std::endl;
    }
}

void HashTable::print()
{
    std::cout << "[[Table Start]]" << std::endl;
    for (int i = 0; i < this->size; i++)
    {
        if (this->T[i]->length() == 0)
        {
            continue;
        }
        std::cout << "Index: " << i << " --- ";
        this->T[i]->print();
    }
    std::cout << "[[Table End]]" << std::endl;
}