#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList()
{
    head = nullptr;
    tail = nullptr;
    size = 0;
}

Iterator DoublyLinkedList::begin()
{
    return Iterator(head);
}

Iterator DoublyLinkedList::end()
{
    return Iterator(nullptr);
}
