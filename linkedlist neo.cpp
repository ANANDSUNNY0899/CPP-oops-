#include <iostream>
using namespace std;

struct node {
    int data;
    node* link;
};

node* start = NULL;
node* evenStart = NULL;
node* oddStart = NULL;

// Function to insert a new node at the end of the linked list
void insert(int item) {
    node* nd = new node;
    nd->data = item;
    nd->link = NULL;

    if (start == NULL) {
        start = nd;
    } else {
        node* ptr = start;
        while (ptr->link != NULL) {
            ptr = ptr->link;
        }
        ptr->link = nd;
    }
}

// Function to categorize elements into even and odd numbers
void categorize() {
    node* ptr = start;
    while (ptr != NULL) {
        if (ptr->data % 2 == 0) {
            // If the number is even, insert it into the even list
            node* evenNode = new node;
            evenNode->data = ptr->data;
            evenNode->link = NULL;

            if (evenStart == NULL) {
                evenStart = evenNode;
            } else {
                node* evenPtr = evenStart;
                while (evenPtr->link != NULL) {
                    evenPtr = evenPtr->link;
                }
                evenPtr->link = evenNode;
            }
        } else {
            // If the number is odd, insert it into the odd list
            node* oddNode = new node;
            oddNode->data = ptr->data;
            oddNode->link = NULL;

            if (oddStart == NULL) {
                oddStart = oddNode;
            } else {
                node* oddPtr = oddStart;
                while (oddPtr->link != NULL) {
                    oddPtr = oddPtr->link;
                }
                oddPtr->link = oddNode;
            }
        }
        ptr = ptr->link;
    }
}

// Function to print a linked list
void printLinkedList(node* head) {
    node* ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
    cout << endl;
}

int main() {
    int n, item;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> item;
        insert(item);
    }

    categorize();

    cout << "Even numbers: ";
    printLinkedList(evenStart);

    cout << "Odd numbers: ";
    printLinkedList(oddStart);

    return 0;
}

