#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> data;

public:

    void push(int value) {
        data.push_back(value);
        cout << "Element pushed successfully.\n";
    }

    void pop() {
        if (data.empty()) {
            cout << "Stack is empty.\n";
            return;
        }

        cout << "Removed: " << data.back() << endl;
        data.pop_back();
    }

    void peek() const {
        if (data.empty()) {
            cout << "Stack is empty.\n";
            return;
        }

        cout << "Top element: " << data.back() << endl;
    }

    void display() const {
        if (data.empty()) {
            cout << "Stack is empty.\n";
            return;
        }

        cout << "Stack: ";

        for (int i = data.size() - 1; i >= 0; i--) {
            cout << data[i] << " ";
        }

        cout << endl;
    }
};

#endif
