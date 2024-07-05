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
    Stack stack_temp; //creamos una pila temporal

    while (!isEmpty())
    {
         T aux = pop(); // creamos variable auxiliar y asignamos valor top de la pila principal

        if(stack_temp.isEmpty()) // si la pila temporal esta vacia le insertamos un valor. 
        {
            stack_temp.push(aux);
        }
        else
        {   
            while(!stack_temp.isEmpty() && aux > stack_temp.head->getData()) //mientras la pila auxiliar no este vacia y aux sea mayor al head temporal entonces insertamos a la pila principal
            {
                push(stack_temp.pop());
                if(stack_temp.isEmpty()){stack_temp.push(aux);}// comprobamos si quedo vacia
            }

            if(aux < stack_temp.head->getData()) //si aux es menor insertamos en la pila temporal
            {
                stack_temp.push(aux);
            }
        } 
    }

    while (!stack_temp.isEmpty()) // vaciamos la cola temporal
    {
        push(stack_temp.pop());
    }
    
    print(); //imprimimos
}

template <class T>
void Stack<T>::ascendingOrder()
{
    Stack stack_temp; //creamos una pila temporal

    while (!isEmpty())
    {
         T aux = pop(); // creamos variable auxiliar y asignamos valor top de la pila principal

        if(stack_temp.isEmpty()) // si la pila temporal esta vacia le insertamos un valor. 
        {
            stack_temp.push(aux);
        }
        else
        {   
            while(!stack_temp.isEmpty() && aux < stack_temp.head->getData()) //mientras la pila auxiliar no este vacia y aux sea menor al head temporal entonces insertamos a la pila principal
            {
                push(stack_temp.pop());
                if(stack_temp.isEmpty()){stack_temp.push(aux);}// comprobamos si quedo vacia
            }

            if(aux > stack_temp.head->getData()) //si aux es mayor insertamos en la pila temporal
            {
                stack_temp.push(aux);
            }
        } 
    }

    while (!stack_temp.isEmpty()) // vaciamos la cola temporal
    {
        push(stack_temp.pop());
    }
    
    print(); //imprimimos
}