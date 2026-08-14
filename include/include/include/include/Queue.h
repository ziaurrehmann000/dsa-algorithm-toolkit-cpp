#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <queue>
using namespace std;

class Queue {
private:
    queue<int> data;

public:

    void enqueue(int value) {
        data.push(value);
        cout << "Element added to queue.\n";
    }

    void dequeue() {
        if (data.empty()) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Removed: " << data.front() << endl;
        data.pop();
    }

    void front() const {
        if (data.empty()) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Front element: " << data.front() << endl;
    }

    void display() const {
        if (data.empty()) {
            cout << "Queue is empty.\n";
            return;
        }

        queue<int> temp = data;

        cout << "Queue: ";

        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }

        cout << endl;
    }
};

#endif
