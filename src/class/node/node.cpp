#include <iostream>
#include "./node.hpp"
#include "../queue/queue.hpp"
using namespace std;

template <class T>
Node<T>::Node(T data, Node<T>* next){
    this->data = data;
    if(next != NULL){
        this->next = next;
    }
}

template <class T>
T Node<T>::getData(){
    return this->data;
}

template <class T>
void Node<T>::setData(T data){
    this->data = data;
}

template <class T>
Node<T>* Node<T>::getNextNode(){
    return this->next;
}

template <class T>
void Node<T>::setNextNode(Node<T>* next){
    if(next!=NULL)
    {
        this->next=next;
    }
}

template <class T>
void Node<T>::print(){
    cout<<this->data<<endl;
}

template <class T>
void Node<T>::printAscendingOrder()
{
    data.ascendingOrder();
    data.print();
}

template <class T>
void Node<T>::printDescensingOrder()
{
    data.descendingOrder();
    data.print();
}