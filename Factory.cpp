/**
* @file Factory.cpp
 * @brief Implementacja metod klasy Factory.
 */

#include "Factory.h"

/**
 * @brief Alokuje dynamicznie pamięć dla nowego węzła i zwraca na niego wskaźnik.
 */
Node* Factory::createNode(int value)
{
    return new Node(value);
}