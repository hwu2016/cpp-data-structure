#include "Stack.h"
#include <iostream>

template<typename T>
int Stack<T>::size()
{
    return this -> container.size();
}

template<typename T>
bool Stack<T>::empty()
{
    if (this->container.size() == 0) return true;
    return false;
}

template<typename T>
void Stack<T>::push(T element)
{
    this->container.push_back(element);
}

template<typename T>
T Stack<T>::pop()
{
    if (this -> empty())
    {
        std::cout << "Stack is empty" << std::endl;
        return T();
    }
    else
    {
        T tmp = this->container[this->container.size() - 1];
        this->container.pop_back();
        return tmp;
    }
}

template<typename T>
T Stack<T>::top()
{
    if (this -> empty())
    {
        std::cout << "Stack is empty" << std::endl;
        return T();
    }
    else 
    {
        return this -> container[this->container.size() - 1];
    }
}

template<typename T>
int Stack<T>::search(T target)
{
    if (this -> empty())
    {
        return -1;
    }
    for (int i = 0; i < this->container.size(); i++)
    {
        if (this->container[i] == target)
        {
            return i;
        }
    }
    return -1;
}

template<typename T>
void Stack<T>::print()
{
    if (this->empty())
    {
        std::cout << "Empty Stack" <<std::endl;
        return;
    }
    for (int i = 0; i < this->container.size() - 1; i++)
    {
        std::cout << this->container[i] << " , ";
    }
    std::cout << this->container[this->container.size() - 1] << std::endl;
}

template class Stack<int>;