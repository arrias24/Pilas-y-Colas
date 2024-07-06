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
    Stack<T> stack_temp; // creamos una pila auxiliar

    while (!isEmpty())
    {
        if (stack_temp.isEmpty()) // si la pila temporal está vacía, se inserta un elemento
        {
            stack_temp.push(pop());
        }
        else
        {
            if (head->getData() > stack_temp.getHead()->getData()) // si el head de la cola es mayor al head de la pila, se inserta un elemento en la pila
            {
                stack_temp.push(pop());
            }
            else
            {
                // Movemos elementos de la pila temporal de vuelta a la cola hasta encontrar la posición adecuada
                while (!stack_temp.isEmpty() && head->getData() < stack_temp.getHead()->getData())
                {
                    push(stack_temp.pop());
                }
                stack_temp.push(pop());
            }
        }
    }

    // Pasamos los elementos de la pila de vuelta a la cola en orden
    while (!stack_temp.isEmpty())
    {
        push(stack_temp.pop());
    }

    print(); // imprimir la cola
}


template <class T>
void Queue<T>::ascendingOrder()
{
    Stack<T> stack_temp; // creamos una pila auxiliar

    while (!isEmpty())
    {
        if (stack_temp.isEmpty()) // si la pila temporal está vacía, se inserta un elemento
        {
            stack_temp.push(pop());
        }
        else
        {
            if (head->getData() < stack_temp.getHead()->getData()) // si el head de la cola es menor al head de la pila, se inserta un elemento en la pila
            {
                stack_temp.push(pop());
            }
            else
            {
                // Mover elementos de la pila temporal de vuelta a la cola hasta encontrar la posición adecuada
                while (!stack_temp.isEmpty() && head->getData() > stack_temp.getHead()->getData())
                {
                    push(stack_temp.pop());
                }
                stack_temp.push(pop());
            }
        }
    }

    // Pasar los elementos de la pila de vuelta a la cola en orden
    while (!stack_temp.isEmpty())
    {
        push(stack_temp.pop());
    }

    print(); // imprimir la cola
}



        

        