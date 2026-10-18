#ifndef LISTADWUKIERUNKOWA_PYRDOL_JAKUB_DOUBLYLINKEDLIST_H
#define LISTADWUKIERUNKOWA_PYRDOL_JAKUB_DOUBLYLINKEDLIST_H
#include "Factory.h"
#include "Iterator.h"
#include "Node.h"

/**
 * @brief Główna klasa zarządzająca listą dwukierunkową.
 *
 * Klasa przechowuje wskaźniki na początek i koniec listy. Zarządza
 * dodawaniem, usuwaniem i wyświetlaniem elementów, wykorzystując
 * do tego wzorzec Factory oraz wydając
 * iteratory (wzorzec Iterator).
 */
class DoublyLinkedList
{
private:
    /**
     * @brief Wskaźnik na pierwszy węzeł listy (głowę).
     */
    Node* head;

    /**
     * @brief Wskaźnik na ostatni węzeł listy (ogon).
     */
    Node* tail;

    /**
     * @brief Obiekt fabryki odpowiedzialny za bezpieczne tworzenie nowych węzłów.
     */
    Factory factory;

    /**
     * @brief Zmienna przechowująca aktualną liczbę elementów na liście.
     */
    int size;

public:
    /**
     * @brief Dodaje nowy element na sam początek listy.
     *
     * @param value Wartość liczbowa do zapisania w nowym węźle.
     */
    void push_front(int value);

    /**
     * @brief Dodaje nowy element na sam koniec listy.
     *
     * @param value Wartość liczbowa do zapisania w nowym węźle.
     */
    void push_back(int value);

    /**
     * @brief Wstawia nowy element pod wskazany indeks.
     *
     * @param index Pozycja, na którą ma zostać wstawiony element (liczona od 0).
     * @param value Wartość liczbowa do zapisania w nowym węźle.
     */
    void push_wherever(int index, int value);

    /**
     * @brief Usuwa pierwszy element z listy i zwalnia jego pamięć.
     */
    void pop_front();

    /**
     * @brief Usuwa ostatni element z listy i zwalnia jego pamięć.
     */
    void pop_back();

    /**
     * @brief Usuwa element znajdujący się pod wskazanym indeksem.
     *
     * @param index Pozycja elementu do usunięcia (liczona od 0).
     */
    void pop_wherever(int index);

    /**
     * @brief Wyświetla zawartość całej listy od początku do końca.
     */
    void display_list();

    /**
     * @brief Wyświetla zawartość całej listy w odwrotnej kolejności (od końca do początku).
     */
    void display_reversed_list();

    /**
     * @brief Wyświetla następny element w sekwencji.
     */
    void display_next_element();

    /**
     * @brief Wyświetla poprzedni element w sekwencji.
     */
    void display_prev_element();

    /**
     * @brief Usuwa wszystkie elementy z listy, całkowicie ją czyszcząc i zwalniając pamięć.
     */
    void clear_list();

    /**
     * @brief Zwraca iterator ustawiony na początek listy.
     *
     * @return Iterator wskazujący na element head.
     */
    Iterator begin();

    /**
     * @brief Zwraca iterator reprezentujący koniec listy.
     *
     * @return Iterator ustawiony za ostatnim elementem (najczęściej wskazujący na nullptr).
     */
    Iterator end();
};

#endif //LISTADWUKIERUNKOWA_PYRDOL_JAKUB_DOUBLYLINKEDLIST_H