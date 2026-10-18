#include "Factory.h"

Node* Factory::createNode(int value)
{
    return new Node(value);
}
