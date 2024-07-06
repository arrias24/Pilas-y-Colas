#include <iostream>
#include "../src/class/stack/stack.cpp"
#include "../src/class/queue/queue.cpp"
#include "../src/class/list/list.cpp"
#include "../src/class/node/node.cpp"
using namespace std;

int main()
{
    int num; // variable contadora

    //COLAS

    cout<<"Cola - Orden Ascendente"<<endl;
    cout<<"Cuantas colas va a ingresar: ";cin>>num;

    Queue <int> queue_ascending[num]; //creamos las colas

    List  <Queue<int>> list_queue_ascending;  //creamos una lista que va a contener colas que mostraran de forma ascendente.


    //COLA - ORDEN ASCENDENTE

    for(int i = 0; i < num; i++) //insertamos valores aleatorios a la cola
    {
        for(int j = 0; j < 5; j++)
        {
            queue_ascending[i].push(rand()%100);
        }
    }

    for (int i = 0; i < num; i++) //insertamos las colas en la lista
    {
        list_queue_ascending.insert(queue_ascending[i]);
    }
    list_queue_ascending.printAscending(); // imprimimos


    //COLA - ORDEN DESCENDIENTE

    cout<<"Cola - Orden Descendiente"<<endl;
    cout<<"Cuantas colas va a ingresar: ";cin>>num;

    Queue <int> queue_descending[num]; //creamos las colas

    List  <Queue<int>> list_queue_descending;  //creamos una lista que va a contener colas que se ordenaran de forma descendente.


    for(int i = 0; i < num; i++) //insertamos valroes aleatorios
    {
        for(int j = 0; j < 5; j++)
        {
            queue_descending[i].push(rand()%100);
        }
    }

    for (int i = 0; i < num; i++) // insertamos las colas en la lista.
    {
        list_queue_descending.insert(queue_descending[i]);
    }
    list_queue_descending.printDescending(); // imprimims

    //PILAS

    //PILA - ORDEN ASCENDENTE

    cout<<"Pila - Orden Ascendente."<<endl;
    cout<<"Cuantas pilas va a crear: ";cin>>num;

    Stack<int> stack_ascending[num]; // creamos pilas

    List<Stack<int>> list_stack_ascending; //creamos listas que contendra pilas ascendentes

    for(int i = 0; i < num; i++) // insertamos valores aleatorios a la pila
    {
        for(int j = 0; j < 5; j++)
        {
            stack_ascending[i].push(rand()%100);
        }
    }

    for (int i = 0; i < num; i++) // insertamos pilas a la lista
    {
        list_stack_ascending.insert(stack_ascending[i]);
    }
    list_stack_ascending.printAscending(); //imprimimos

    //PILA - ORDEN DESCENDENTE


    cout<<"Pila - Orden Descendente."<<endl;
    cout<<"Cuantas pilas va a crear: ";cin>>num;

    Stack<int> stack_descending[num]; // creamos pilas

    List<Stack<int>> list_stack_descending; //creamos listas que contendra pilas descendentes

    for(int i = 0; i < num; i++) // insertamos valores aleatorios a la pila
    {
        for(int j = 0; j < 5; j++)
        {
            stack_descending[i].push(rand()%100);
        }
    }

    for (int i = 0; i < num; i++) // insertamos pilas a la lista
    {
        list_stack_descending.insert(stack_descending[i]);
    }
    list_stack_descending.printDescending(); //imprimimos    

    return 0;
}