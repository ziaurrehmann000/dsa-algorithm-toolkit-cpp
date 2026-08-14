#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

class LinkedList {
private:

    struct Node {
        int data;
        Node* next;

        Node(int value) {
            data = value;
            next = nullptr;
        }
    };

    Node* head;

public:

    LinkedList() {
        head = nullptr;
    }

    void insert(int value) {

        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* current = head;

        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = newNode;
    }

    void display() const {

        if (head == nullptr) {
            cout << "Linked List is empty.\n";
            return;
        }

        Node* current = head;

        cout << "Linked List: ";

        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }

        cout << endl;
    }

    bool search(int value) const {

        Node* current = head;

        while (current != nullptr) {

            if (current->data == value) {
                return true;
            }

            current = current->next;
        }

        return false;
    }
};

#endif
