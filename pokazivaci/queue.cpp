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
    auto new_element = new Element { value, nullptr };
    if(red.front == nullptr) {
        red.front = new_element;
        red.back = new_element;
    }
    else {
        red.back->next = new_element;
        red.back = new_element;
    }
}

void pop(struct Queue &red) {
    auto old_front = red.front;
    red.front = red.front->next;
    delete old_front;
}

int front(struct Queue &red) {
    return red.front->value;
}

bool empty(struct Queue &red) {
    return red.front == nullptr;
}

void clear(struct Queue &red) {
    while(!empty(red)) {
        pop(red);
    }
}

int main() {
    struct Queue red = Queue();
    // struct Queue red = Queue { nullptr, nullptr };
    push(red, 1); // 1
    push(red, 2); // 1 2
    push(red, 3); // 1 2 3
    cout << front(red) << endl; // >>> 1
    pop(red); // 2 3
    clear(red); // -
    push(red, 4); // 4 
    cout << front(red) << endl; // >>> 4
}