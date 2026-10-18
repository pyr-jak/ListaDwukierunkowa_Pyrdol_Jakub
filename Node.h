#ifndef LISTADWUKIERUNKOWA_PYRDOL_JAKUB_NODE_H
#define LISTADWUKIERUNKOWA_PYRDOL_JAKUB_NODE_H

/**
 * @brief Klasa reprezentująca pojedynczy węzeł listy dwukierunkowej.
 *
 * Służy jako podstawowy kontener przechowujący dane (liczbę całkowitą)
 * oraz informacje o sąsiadujących elementach w strukturze listy.
 */
class Node
{
public:
    /**
     * @brief Przechowywana wartość całkowitą.
     */
    int value;

    /**
     * @brief Wskaźnik na następny element na liście.
     */
    Node* next;

    /**
     * @brief Wskaźnik na poprzedni element na liście.
     */
    Node* prev;

    /**
     * @brief Konstruktor inicjujący nowy węzeł.
     *
     * @param value Wartość początkowa przypisywana do zmiennej value.
     */
    Node(int value);
};

#endif