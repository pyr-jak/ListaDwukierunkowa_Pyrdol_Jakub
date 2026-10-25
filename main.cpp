#include <iostream>
#include "DoublyLinkedList.h"

int main() {
    DoublyLinkedList list;

    std::cout << "Testing push_back ";
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.display_list();

    std::cout << "Testing push_front ";
    list.push_front(5);
    list.display_list();

    std::cout << "Testing push_wherever ";
    list.push_wherever(2, 99);
    list.display_list();
    std::cout << " REVERSED LIST: ";
    list.display_reversed_list();

    std::cout << "Testing pop_front ";
    list.pop_front();
    list.display_list();

    std::cout << "Testing pop_back ";
    list.pop_back();
    list.display_list();;

    std::cout << "Testing pop_wherever ";
    list.pop_wherever(1);
    list.display_list();

    list.display_next_element();
    list.display_next_element();
    list.display_next_element();

    list.display_prev_element();
    list.display_prev_element();
    list.display_prev_element();

    list.clear_list();
    return 0;
}
