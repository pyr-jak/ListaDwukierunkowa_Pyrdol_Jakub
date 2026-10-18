#ifndef LISTADWUKIERUNKOWA_PYRDOL_JAKUB_FACTORY_H
#define LISTADWUKIERUNKOWA_PYRDOL_JAKUB_FACTORY_H
#include "Node.h"

/**
 * @brief Klasa implementująca wzorzec Factory.
 *
 * Odpowiada za bezpieczne tworzenie nowych węzłów (Node) na stercie.
 * Zastosowanie tego wzorca pozwala na oddzielenie logiki alokacji pamięci
 * od głównej logiki zarządzania samą listą dwukierunkową.
 */
class Factory
{
public:
    /**
     * @brief Tworzy nowy obiekt węzła na stercie.
     *
     * Wykorzystuje operator new do alokacji pamięci dla nowego węzła i
     * inicjuje go przekazaną wartością.
     *
     * @param value Wartość całkowita liczby, która zostanie przypisana do nowego węzła.
     * @return Node* Wskaźnik na nowo utworzony węzeł.
     */
    Node* createNode(int value);
};

#endif //LISTADWUKIERUNKOWA_PYRDOL_JAKUB_FACTORY_H