#include <iostream>
#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList()
{
    head = nullptr;
    tail = nullptr;
    size = 0;
}

Iterator DoublyLinkedList::begin()
{
    return Iterator(head);
}

Iterator DoublyLinkedList::end()
{
    return Iterator(nullptr);
}


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

void DoublyLinkedList::display_list()
{
    if (head == nullptr)
    {
        std::cout<<"List is empty"<<std::endl;
        return;
    }

    Node* current = head;

    while (current != nullptr)
    {
        std::cout<< current->value << " ";
        current = current->next;
    }
    std::cout<<std::endl;
}

void DoublyLinkedList::display_reversed_list()
{
    if (head == nullptr)
    {
        std::cout<<"List is empty"<<std::endl;
        return;
    }

    Node* current = tail;

    while (current != nullptr)
    {
        std::cout<< current->value << " ";
        current = current->prev;
    }
    std::cout<<std::endl;
}

void DoublyLinkedList::clear_list()
{
    while (head != nullptr)
    {
        pop_front();
    }
    std::cout<<"Clearing Completed"<<std::endl;
}
