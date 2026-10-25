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