#include <iostream>
#include "./queue.hpp"
#include "../stack/stack.hpp"
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

template <class T>
void Queue<T>::descendingOrder()
{
    Stack<T> stack_temp; //creamos una pila auxiliar

    while (!isEmpty())
    {
        if(stack_temp.isEmpty()) //si la cola temporal esta vacia se inserta un elemento
        {
            stack_temp.push(pop());
        }
        else
        {
            if(head->getData() > stack_temp.getHead()->getData()) // si el head de la cola es mayor al head de la pila se inserta un elemento a la pila
            {
                stack_temp.push(pop());
            }
            else
            {
                while (head->getData() < stack_temp.getHead()->getData()) // mientras el head de la cola sea menor al head de la pila insertamos elemento en la cola.
                {
                    push(stack_temp.pop());
                    if(stack_temp.isEmpty()){stack_temp.push(pop());} //comprobamos si esta vacia
                }
            }
        }
    }
    while (!stack_temp.isEmpty()) // pasamos los elementos de la pila a la cola
    {
        push(stack_temp.pop());
    }
    print(); //imprimimos la cola
}


template <class T>
void Queue<T>::ascendingOrder()
{
    Stack<T> stack_temp; //creamos una pila auxiliar

    while (!isEmpty())
    {
        if(stack_temp.isEmpty()) //si la pila esta vacia se inserta un elemento
        {
            stack_temp.push(pop());
        }
        else
        {
            if(head->getData() < stack_temp.getHead()->getData()) // si el head de la cola es menor al head de la pila se inserta un elemento a la pila
            {
                stack_temp.push(pop());
            }
            else
            {
                while (head->getData() > stack_temp.getHead()->getData()) // mientras el head de la cola sea mayor al head de la pila insertamos elemento en la cola.
                {
                    push(stack_temp.pop());
                    if(stack_temp.isEmpty()){stack_temp.push(pop());} //comprobamos si esta vacia
                }
            }
        }
    }
    while (!stack_temp.isEmpty()) // pasamos los elementos de la pila a la cola
    {
        push(stack_temp.pop());
    }
    print(); //imprimimos la cola
}



        

        