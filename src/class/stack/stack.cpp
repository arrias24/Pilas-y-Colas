#include <iostream>
#include "./stack.hpp"
using namespace std;

template <class T>
bool Stack<T>::isEmpty(){
    return this->head == NULL;
}

template <class T>
void Stack<T>::push(T data){
    Node<T>* node = new Node<T>(data,head);
    head = node;
}

template <class T>
T Stack<T>::pop(){
    T data;
    if (isEmpty()) return true;

    Node<T>* node = head;
    head = head->getNextNode();
    data = node->getData();

    delete node;
    return data;
}


template <class T>
void Stack<T>::print(){
    while(!isEmpty())
    {
        cout<<pop()<<endl;
    }
}

template <class T>
void Stack<T>::descendingOrder()
{
    T aux;
    Stack stack_temp; //creamos una pila temporal

    while (!isEmpty())
    {
        aux = pop(); //asignamos valor top de la pila principal

        if(stack_temp.isEmpty()) //caso 1 - esta vacia la pila temporal
        {
            stack_temp.push(aux);
        }
        
        while (!stack_temp.isEmpty() && aux > stack_temp.head->getData()) //caso 2 - no esta vacia la pila y es mayor
        {
            push(stack_temp.pop());
        }

        if(stack_temp.isEmpty()) // volvemos a comprobar el caso 1
        {
            stack_temp.push(aux);
        }

        while(!stack_temp.isEmpty() && aux < stack_temp.head->getData()) //caso 3 - no esta vacia la pila temporal y es menor
        {
            stack_temp.push(aux);
        }
        
    }
    stack_temp.print(); //imprimimos pila temporal
}

template <class T>
void Stack<T>::ascendingOrder()
{
    T aux;
    Stack stack_temp; //creamos una pila temporal

    while (!isEmpty())
    {
        aux = pop(); //asignamos valor top de la pila principal

        if(stack_temp.isEmpty()) //caso 1 - esta vacia la pila temporal
        {
            stack_temp.push(aux);
        }
        
        while (!stack_temp.isEmpty() && aux < stack_temp.head->getData()) //caso 2 - no esta vacia la pila y es mayor
        {
            push(stack_temp.pop());
        }

        if(stack_temp.isEmpty()) // volvemos a comprobar el caso 1
        {
            stack_temp.push(aux);
        }

        while(!stack_temp.isEmpty() && aux > stack_temp.head->getData()) //caso 3 - no esta vacia la pila temporal y es menor
        {
            stack_temp.push(aux);
        }
        
    }
    stack_temp.print(); //imprimimos pila temporal
}