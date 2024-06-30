#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>
#include "../node/node.hpp"
using namespace std;

template <class T>
class Queue{
    private:
        Node<T>* head = NULL;
        Node<T>* tail = NULL;
    public:
        void push(T);
        T pop();
        bool isEmpty();
        void print();
};

#endif