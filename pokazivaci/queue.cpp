#include <iostream>

using namespace std;

struct Element {
    int value;
    struct Element* next;
};

struct Queue {
    struct Element* front;
    struct Element* back;
};

void push(struct Queue &red, int value) {

}

void pop(struct Queue &red) {

}

int front(struct Queue &red) {
    return red.front->value;
}

int main() {
    struct Queue red = { nullptr, nullptr };
    push(red, 1); // 1
    push(red, 2); // 1 2
    push(red, 3); // 1 2 3
    cout << front(red) << endl; // 1
    pop(red); // 2 3
    cout << front(red) << endl; // 2
}