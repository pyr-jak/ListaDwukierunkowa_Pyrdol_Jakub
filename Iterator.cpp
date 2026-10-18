#include "Iterator.h"

Iterator::Iterator(Node* current)
{
    this->current = current;
}

void Iterator::operator++()
{
    current = current->next;
}

void Iterator::operator--()
{
    current = current->prev;
}

int Iterator::operator*()
{
    return current->value;
}

bool Iterator::operator!=(const Iterator& other)
{
    return this->current != other.current;
}
