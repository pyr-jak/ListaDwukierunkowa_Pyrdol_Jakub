#include "Node.h"

Node::Node(int value)
{
    this->value = value;
    this->next = nullptr;
    this->prev = nullptr;
}