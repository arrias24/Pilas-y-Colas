#include <iostream>
#include "./queue.hpp"
using namespace std;

template <class T>
bool Queue<T>::isEmpty(){
    return this->head == NULL;
}

template <class T>
void Queue<T>::push(T data){
    Node<T>* node = new Node<T>(data,NULL);

    if(isEmpty())
    {
        head = tail = node;
    }
    else
    {
        tail->setNextNode(node);
        tail = node;
    }
    
}

template <class T>
T Queue<T>::pop(){
    T data;
    if (isEmpty()) return true;

    Node<T>* node = head;
    head = head->getNextNode();
    data = node->getData();

    delete node;
    return data;
}

template <class T>
void Queue<T>::print(){
    while(!isEmpty())
    {
        cout<<pop()<<endl;
    }
}