#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include "../node/node.hpp"
using namespace std;

template <class T>
class Stack{
    private:
        Node<T>* head = NULL;
    public:
        void push(T);
        T pop();
        bool isEmpty();
        void print();
};

#endif