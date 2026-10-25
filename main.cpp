#include <iostream>
#include "DoublyLinkedList.h"

int main() {
    DoublyLinkedList list;

    std::cout << "Testowanie push_back ";
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.display_list();

    std::cout << "Testowanie push_front ";
    list.push_front(5);
    list.display_list();

    std::cout << "Testowanie push_wherever ";
    list.push_wherever(2, 99);
    list.display_list();

    std::cout << "Testowanie pop_front ";
    list.pop_front();
    list.display_list();

    std::cout << "Testowanie pop_back ";
    list.pop_back();
    list.display_list();

    std::cout << "Testowanie pop_wherever ";
    list.pop_wherever(1);
    list.display_list();

    return 0;
}
