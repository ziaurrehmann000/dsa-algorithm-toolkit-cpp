#include <iostream>
#include <vector>
#include "Searching.h"
#include "Sorting.h"
#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"

using namespace std;

void displayArray(const vector<int>& arr) {
    cout << "Array: ";

    for (int value : arr) {
        cout << value << " ";
    }

    cout << endl;
}

vector<int> getInputArray() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    return arr;
}

void searchingMenu() {

    vector<int> arr = getInputArray();

    int target;
    int choice;

    cout << "\n===== SEARCHING =====\n";
    cout << "1. Linear Search\n";
    cout << "2. Binary Search\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter value to search: ";
    cin >> target;

    int result = -1;

    if (choice == 1) {

        result = Searching::linearSearch(arr, target);

    } else if (choice == 2) {

        Sorting::insertionSort(arr);

        cout << "Array sorted for Binary Search.\n";
        displayArray(arr);

        result = Searching::binarySearch(arr, target);

    } else {

        cout << "Invalid choice.\n";
        return;
    }

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found.\n";
    }
}

void sortingMenu() {

    vector<int> arr = getInputArray();

    int choice;

    cout << "\n===== SORTING =====\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Selection Sort\n";
    cout << "3. Insertion Sort\n";
    cout << "4. Merge Sort\n";
    cout << "5. Quick Sort\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {

    case 1:
        Sorting::bubbleSort(arr);
        break;

    case 2:
        Sorting::selectionSort(arr);
        break;

    case 3:
        Sorting::insertionSort(arr);
        break;

    case 4:
        Sorting::mergeSort(arr, 0, arr.size() - 1);
        break;

    case 5:
        Sorting::quickSort(arr, 0, arr.size() - 1);
        break;

    default:
        cout << "Invalid choice.\n";
        return;
    }

    cout << "\nSorted successfully.\n";
    displayArray(arr);
}

void stackMenu() {

    Stack stack;
    int choice;
    int value;

    do {

        cout << "\n===== STACK =====\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Back\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter value: ";
            cin >> value;
            stack.push(value);
            break;

        case 2:
            stack.pop();
            break;

        case 3:
            stack.peek();
            break;

        case 4:
            stack.display();
            break;

        case 5:
            cout << "Returning to main menu.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 5);
}

void queueMenu() {

    Queue queue;
    int choice;
    int value;

    do {

        cout << "\n===== QUEUE =====\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Front\n";
        cout << "4. Display\n";
        cout << "5. Back\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter value: ";
            cin >> value;
            queue.enqueue(value);
            break;

        case 2:
            queue.dequeue();
            break;

        case 3:
            queue.front();
            break;

        case 4:
            queue.display();
            break;

        case 5:
            cout << "Returning to main menu.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 5);
}

void linkedListMenu() {

    LinkedList list;
    int choice;
    int value;

    do {

        cout << "\n===== LINKED LIST =====\n";
        cout << "1. Insert\n";
        cout << "2. Display\n";
        cout << "3. Search\n";
        cout << "4. Back\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter value: ";
            cin >> value;
            list.insert(value);
            cout << "Value inserted successfully.\n";
            break;

        case 2:
            list.display();
            break;

        case 3:
            cout << "Enter value to search: ";
            cin >> value;

            if (list.search(value)) {
                cout << "Value found in linked list.\n";
            } else {
                cout << "Value not found.\n";
            }

            break;

        case 4:
            cout << "Returning to main menu.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);
}

int main() {

    int choice;

    do {

        cout << "\n========================================\n";
        cout << "       DSA ALGORITHM TOOLKIT\n";
        cout << "========================================\n";
        cout << "1. Searching Algorithms\n";
        cout << "2. Sorting Algorithms\n";
        cout << "3. Stack\n";
        cout << "4. Queue\n";
        cout << "5. Linked List\n";
        cout << "6. Exit\n";
        cout << "========================================\n";
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice) {

        case 1:
            searchingMenu();
            break;

        case 2:
            sortingMenu();
            break;

        case 3:
            stackMenu();
            break;

        case 4:
            queueMenu();
            break;

        case 5:
            linkedListMenu();
            break;

        case 6:
            cout << "\nThank you for using DSA Algorithm Toolkit!\n";
            break;

        default:
            cout << "\nInvalid choice. Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}
