#ifndef LISTADWUKIERUNKOWA_PYRDOL_JAKUB_ITERATOR_H
#define LISTADWUKIERUNKOWA_PYRDOL_JAKUB_ITERATOR_H
#include "Node.h"

class Iterator
{
private:
    Node* current;
public:
    Iterator(Node* current);
    void operator++();
    void operator--();
    int operator*();
    bool operator!=(const Iterator& other);
};


#endif