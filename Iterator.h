#ifndef LISTADWUKIERUNKOWA_PYRDOL_JAKUB_ITERATOR_H
#define LISTADWUKIERUNKOWA_PYRDOL_JAKUB_ITERATOR_H
#include "Node.h"

/**
 * @brief Klasa implementująca wzorzec Iterator dla listy dwukierunkowej.
 *
 * Pozwala przechodzenie przez elementy listy w obu kierunkach
 * za pomocą standardowych operatorów, ukrywając przed użytkownikiem logikę wskaźników.
 */
class Iterator
{
private:
    /**
     * @brief Wskaźnik na węzeł, na którym aktualnie znajduje się iterator.
     */
    Node* current;

public:
    /**
     * @brief Konstruktor inicjujący iterator.
     *
     * @param current Wskaźnik na węzeł startowy, od którego iterator rozpocznie pracę.
     */
    Iterator(Node* current);

    /**
     * @brief Operator inkrementacji.
     *
     * Przesuwa wskaźnik iteratora na następny element listy.
     */
    void operator++();

    /**
     * @brief Operator dekrementacji.
     *
     * Przesuwa wskaźnik iteratora na poprzedni element listy.
     */
    void operator--();

    /**
     * @brief Operator wyłuskania.
     *
     * @return Liczba całkowita przechowywana w aktualnie wskazywanym węźle.
     */
    int operator*();

    /**
     * @brief Operator nierówności.
     *
     * Porównuje dwa iteratory. W pętlach, sprawdza czy iterator
     * nie dotarł jeszcze do końca kolekcji.
     *
     * @param other Inny obiekt iteratora, z którym porównujemy obecny.
     * @return true Jeśli iteratory wskazują na różne węzły.
     * @return false Jeśli iteratory wskazują na ten sam węzeł.
     */
    bool operator!=(const Iterator& other);
};

#endif //LISTADWUKIERUNKOWA_PYRDOL_JAKUB_ITERATOR_H