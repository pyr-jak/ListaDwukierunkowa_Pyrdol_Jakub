/**
 * @file DoublyLinkedList.cpp
 * @brief Implementacja metod klasy DoublyLinkedList.
 */

#include <iostream>
#include "DoublyLinkedList.h"

/**
 * @brief Konstruktor domyślny klasy DoublyLinkedList.
 * 
 * Inicjalizuje pustą listę, ustawiając wskaźniki na nullptr oraz rozmiar na 0.
 */
DoublyLinkedList::DoublyLinkedList()
{
    head = nullptr;
    tail = nullptr;
    cursor = nullptr;
    size = 0;
}

/**
 * @brief Zwraca iterator wskazujący na początek listy.
 * 
 * @return Iterator ustawiony na węzeł head.
 */
Iterator DoublyLinkedList::begin()
{
    return Iterator(head);
}

/**
 * @brief Zwraca iterator wskazujący na koniec listy (za ostatni element).
 * 
 * @return Iterator ustawiony na nullptr.
 */
Iterator DoublyLinkedList::end()
{
    return Iterator(nullptr);
}

/**
 * @brief Dodaje nowy element na początek listy.
 * 
 * @param value Wartość do dodania.
 */
void DoublyLinkedList::push_front(int value)
{
    Node* newNode = factory.createNode(value);

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    size++;
}

/**
 * @brief Dodaje nowy element na koniec listy.
 * 
 * @param value Wartość do dodania.
 */
void DoublyLinkedList::push_back(int value)
{
    Node* newNode = factory.createNode(value);

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }else
    {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    size++;
}

/**
 * @brief Wstawia nowy element pod wskazany indeks.
 * 
 * @param index Pozycja, na której ma zostać wstawiony element.
 * @param value Wartość do dodania.
 */
void DoublyLinkedList::push_wherever(int index, int value)
{
    if (index < 0)
    {
        return;
    }

    if (index == 0)
    {
        push_front(value);
        return;
    }

    if (index >= size)
    {
        push_back(value);
        return;
    }

    Node* newNode = factory.createNode(value);
    Node* current = head;

    for (int i = 0; i < index; i++)
    {
        current = current->next;
    }

    newNode->next = current;
    newNode->prev = current->prev;
    current->prev->next = newNode;
    current->prev = newNode;
    size++;
}

/**
 * @brief Usuwa element z początku listy.
 */
void DoublyLinkedList::pop_front()
{
    if (head == nullptr)
    {
        return;
    }

    Node* temp = head;
    head = head->next;

    if (head == nullptr)
    {
        tail = nullptr;
    }else
    {
        head->prev = nullptr;
    }

    delete temp;
    size--;
}

/**
 * @brief Usuwa element z końca listy.
 */
void DoublyLinkedList::pop_back()
{
    if (head == nullptr)
    {
        return;
    }

    Node* temp = tail;
    tail = tail->prev;

    if (tail == nullptr)
    {
        head = nullptr;
    }else
    {
        tail->next = nullptr;
    }

    delete temp;
    size--;
}

/**
 * @brief Usuwa element z podanego indeksu.
 * 
 * @param index Pozycja elementu do usunięcia.
 */
void DoublyLinkedList::pop_wherever(int index)
{
    if (index < 0 || index >= size)
    {
        return;
    }

    if (index == 0)
    {
        pop_front();
        return;
    }

    if (index == size - 1)
    {
        pop_back();
        return;
    }

    Node* current = head;

    for (int i = 0; i < index; i++)
    {
        current = current->next;
    }

    current->prev->next = current->next;
    current->next->prev = current->prev;
    delete current;
    size--;
}

/**
 * @brief Wyświetla zawartość listy od początku do końca, korzystając z iteratora.
 */
void DoublyLinkedList::display_list()
{
    if (head == nullptr)
    {
        std::cout << "Lista jest pusta\n";
        return;
    }

    for (Iterator it = begin(); it != end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

/**
 * @brief Wyświetla zawartość listy od końca do początku, korzystając z iteratora.
 */
void DoublyLinkedList::display_reversed_list()
{
    if (tail == nullptr)
    {
        std::cout << "Lista jest pusta\n";
        return;
    }
    
    for (Iterator it = Iterator(tail); it != end(); --it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

/**
 * @brief Przesuwa kursor na następny element i wyświetla jego wartość.
 */
void DoublyLinkedList::display_next_element()
{
    if (head == nullptr)
    {
        std::cout << "List is empty" << std::endl;
        return;
    }

    if (cursor == nullptr)
    {
        cursor = head;
    }
    else
    {
        cursor = cursor->next;
    }

    if (cursor == nullptr)
    {
        std::cout << "End of the list" << std::endl;
        return;
    }

    std::cout << "Next element: " << cursor->value << std::endl;
}

/**
 * @brief Przesuwa kursor na poprzedni element i wyświetla jego wartość.
 */
void DoublyLinkedList::display_prev_element()
{
    if (head == nullptr)
    {
        std::cout << "List is empty" << std::endl;
        return;
    }

    if (cursor == nullptr)
    {
        cursor = tail;
    }
    else
    {
        cursor = cursor->prev;
    }

    if (cursor == nullptr)
    {
        std::cout << "Beggining of the list" << std::endl;
        return;
    }

    std::cout << "Previous element:" << cursor->value << std::endl;
}

/**
 * @brief Czyści listę usuwając wszystkie jej elementy.
 */
void DoublyLinkedList::clear_list()
{
    while (head != nullptr)
    {
        pop_front();
    }
    std::cout<<"Clearing Completed"<<std::endl;
}