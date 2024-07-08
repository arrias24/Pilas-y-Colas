#include <iostream>
#include <cstdlib>
#include "../src/class/stack/stack.cpp"
#include "../src/class/queue/queue.cpp"
#include "../src/class/list/list.cpp"
#include "../src/class/node/node.cpp"
using namespace std;

int main()
{

    int num; // variable contadora

    //COLA - ORDEN ASCENDENTE

    cout<<"Colas - Orden Ascendente"<<endl;
    cout<<"Cuantas colas quiere ingresar: ";cin>>num;

    
    List<Queue<int>> list_queue_ascending; //creamos lista que contendra las colas de manera ascendente

    for(int i = 0; i < num; i++) //insertamos 
    {
        Queue<int> queue; // creamos cola
        queue.push(rand()%100);
        queue.push(rand()%100);
        queue.push(rand()%100);
        queue.push(rand()%100);
        queue.push(rand()%100);
        queue.push(rand()%100);
        list_queue_ascending.insert(queue); //insertamos en la lista
    }

    list_queue_ascending.printAscending(); // imprimimos

    //COLA - ORDEN DESCENDENTE

    cout<<"Colas - Orden Descendente"<<endl;
    cout<<"Cuantas colas quiere ingresar: ";cin>>num;

    List<Queue<int>> list_queue_descending; //creamos lista que contendra colas de manera descendentes

    for(int i = 0; i < num; i++) //insertamos 
    {
        Queue<int> queue; // creamos cola
        queue.push(rand()%100);
        queue.push(rand()%100);
        queue.push(rand()%100);
        queue.push(rand()%100);
        queue.push(rand()%100);
        queue.push(rand()%100);
        list_queue_descending.insert(queue); //insertamos en la lista
    }

    list_queue_descending.printDescending(); // imprimimos

    //PILA - ORDEN ASCENDENTE

    cout<<"Pilas - Orden Ascendente"<<endl;
    cout<<"Cuantas pilas quiere ingresar: ";cin>>num;

    List<Stack<int>> list_stack_ascending; // creamos lista que contendra pilas de forma ascendente

    for (int i = 0; i < num; i++)
    {
        Stack<int> stack; // creamos pila
        stack.push(rand()%100);
        stack.push(rand()%100);
        stack.push(rand()%100);
        stack.push(rand()%100);
        stack.push(rand()%100);
        list_stack_ascending.insert(stack); //insertamos en la lista
    }

    list_stack_ascending.printAscending(); //imprimimos

    //PILA - ORDEN DESCENDENTE

    cout<<"Pilas - Orden Descendente"<<endl;
    cout<<"Cuantas pilas quiere ingresar: ";cin>>num;

    List<Stack<int>> list_stack_descending; // creamos lista que contendra pilas de forma descendente

    for (int i = 0; i < num; i++)
    {
        Stack<int> stack; // creamos pila
        stack.push(rand()%100);
        stack.push(rand()%100);
        stack.push(rand()%100);
        stack.push(rand()%100);
        stack.push(rand()%100);
        list_stack_descending.insert(stack); //insertamos en la lista
    }

    list_stack_descending.printDescending(); //imprimimos

    return 0;
}