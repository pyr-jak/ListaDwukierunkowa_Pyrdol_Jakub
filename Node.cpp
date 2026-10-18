/**
* @file Node.cpp
 * @brief Plik zawierający implementację metod klasy Node.
 */

#include "Node.h"

/**
 * @brief Tworzy nowy węzeł z zadaną wartością.
 *
 * Inicjuje węzeł ustawiając jego wartość na tę przekazaną w parametrze.
 * Wskaźniki next i prev są bezpiecznie ustawiane na nullptr, ponieważ
 * świeżo utworzony węzeł nie jest jeszcze połączony z resztą listy.
 *
 * @param value Wartość liczbowa do przechowania w węźle.
 */
Node::Node(int value)
{
    this->value = value;
    this->next = nullptr;
    this->prev = nullptr;
}