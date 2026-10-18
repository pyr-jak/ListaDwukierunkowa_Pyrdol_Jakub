/**
* @file Iterator.cpp
 * @brief Implementacja metod klasy Iterator.
 */

#include "Iterator.h"

/**
 * @brief Przypisuje wskaźnik na węzeł początkowy do zmiennej current.
 */
Iterator::Iterator(Node* current)
{
    this->current = current;
}

/**
 * @brief Przesuwa iterator na kolejny element za pomocą wskaźnika next.
 */
void Iterator::operator++()
{
    current = current->next;
}

/**
 * @brief Cofa iterator na poprzedni element za pomocą wskaźnika prev.
 */
void Iterator::operator--()
{
    current = current->prev;
}

/**
 * @brief Zwraca wartość z węzła wskazywanego przez iterator.
 */
int Iterator::operator*()
{
    return current->value;
}

/**
 * @brief Sprawdza, czy węzły wskazywane przez dwa iteratory są od siebie różne.
 */
bool Iterator::operator!=(const Iterator& other)
{
    return this->current != other.current;
}