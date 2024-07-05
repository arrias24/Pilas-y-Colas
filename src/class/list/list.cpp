#include <iostream>
#include "./list.hpp"
#include "../queue/queue.hpp"
using namespace std;

template <class T>
bool List<T>::isEmpty(){
    return this->head == NULL;
}

template <class T>
void List<T>::insertFirst(Node<T>* node){
    Node<T> *temp = head;
    head = node;
    head->setNextNode(temp);
}

template <class T>
void List<T>::insert(T data){
    Node<T>* current = head;
    Node<T>* last = NULL;
    Node<T>* newNode = new Node<T>(data, NULL);

    //SI LA LISTA ESTA VACIA
    if(isEmpty())
    {
        insertFirst(newNode);
    }
    else
    {
    //BUSCAMOS EL NODO ANTERIOR QUE SEA MENOR A DATA
        while(current != NULL)
        {
            last = current;
            current = current->getNextNode();
        }
    //SI NO HAY NODO ANTERIOR ENTONCES EL DATO ES MENOR
        if(last == NULL)
        {
            insertFirst(newNode);
        }
        else
        {
            newNode->setNextNode(last->getNextNode());
            last->setNextNode(newNode);
        }
    }
}

template <class T>
void List<T>::print(){
    Node<T>* current = head;
    while(current != NULL){
        current->print();
        current = current->getNextNode();
    }
}

template <class T>
void List<T>::printAscending(){
    Node<T>* current = head;
    int num = 1;
    while (current != NULL)
    {
        cout<<"Numero:"<<num<<endl;
        current->printAscendingOrder();
        cout<<endl;
        current = current->getNextNode();
        num++;
    }
}

template <class T>
void List<T>::printDescending(){
    Node<T>* current = head;
    int num = 1;
    while (current != NULL)
    {
        cout<<"Numero:"<<num<<endl;
        current->printDescensingOrder();
        cout<<endl;
        current = current->getNextNode();
        num++;
    }
}

