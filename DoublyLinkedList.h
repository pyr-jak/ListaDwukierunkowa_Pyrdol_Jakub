#ifndef LISTADWUKIERUNKOWA_PYRDOL_JAKUB_DOUBLYLINKEDLIST_H
#define LISTADWUKIERUNKOWA_PYRDOL_JAKUB_DOUBLYLINKEDLIST_H
#include "Factory.h"
#include "Iterator.h"
#include "Node.h"


class DoublyLinkedList
{
private:
    Node* head;
    Node* tail;
    Factory factory;
    int size;

public:
    void push_front(int value);
    void push_back(int value);
    void push_wherever(int index, int value);
    void pop_front();
    void pop_back();
    void pop_wherever(int index);
    void display_list();
    void display_reversed_list();
    void display_next_element();
    void display_prev_element();
    void clear_list();
    Iterator begin();
    Iterator end();
};


#endif //LISTADWUKIERUNKOWA_PYRDOL_JAKUB_DOUBLYLINKEDLIST_H