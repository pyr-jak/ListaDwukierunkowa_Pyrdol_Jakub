#ifndef LISTADWUKIERUNKOWA_PYRDOL_JAKUB_NODE_H
#define LISTADWUKIERUNKOWA_PYRDOL_JAKUB_NODE_H


class Node
{
public:
    int value;
    Node* next;
    Node* prev;

    Node(int value);
};


#endif //LISTADWUKIERUNKOWA_PYRDOL_JAKUB_NODE_H