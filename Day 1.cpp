#include <iostream>
using namespace std;

class Twins {
public:
    int data;
    Twins* next;
    Twins* prev;

    Twins(int x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

void insert(Twins*& head, int size) {
    int sum1 = 0;
    Twins* curr = head;

    for (int i = 0; i < size; i++) {
        int x;
        cin >> x;
        curr->next = new Twins(x);
        curr->next->prev = curr;
        curr = curr->next;
    }

    Twins* tail = NULL;
    Twins* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }
    tail = temp;

    temp = head;

    for (int i = 0; i < size / 2; i++) {
        sum1 = max(sum1, temp->data + tail->data);
        temp = temp->next;
        tail = tail->prev;
    }
    cout << sum1;
}

void display(Twins* head) {
    Twins* curr = head;
    while (curr != NULL) {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << endl;

    Twins* tail = NULL;

    while (head != NULL) {
        tail = head;
        head = head->next;
    }

    while (tail != NULL) {
        cout << tail->data << "<-";
        tail = tail->prev;
    }
}

int main() {
    int size;
    cin >> size;
    if (size % 2 != 0) {
        size = size - 1;
    }
    size--;

    Twins* head = new Twins(1);
    insert(head, size);
    display(head);

    return 0;
}
