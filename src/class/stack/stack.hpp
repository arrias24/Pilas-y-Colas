#include <iostream>
#include "../node/node.cpp"
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