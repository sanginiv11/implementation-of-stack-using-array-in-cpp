#include<iostream>
using namespace std;
#define MAX_SIZE 5
#define EMPTY_STACK -9999

class Stack {
    int topIndex, stackArray[MAX_SIZE];
public:
    Stack() {
        topIndex = -1;
        stackArray[0] = 0;
    }
    void push(int element);
    int pop();
    int peek();
    void display();
};

void Stack::push(int element) {
    if (topIndex == MAX_SIZE - 1) {
        cout << "STACK OVERFLOW: Stack is full" << endl;
        return;
    } else {
        stackArray[++topIndex] = element;
    }
}

int Stack::pop() {
    int removedElement;
    if (topIndex == -1) {
        cout << "STACK UNDERFLOW: Stack is empty" << endl;
        return EMPTY_STACK;
    } else {
        removedElement = stackArray[topIndex--];
        return removedElement;
    }
}

int Stack::peek() {
    if (topIndex == -1) {
        cout << "STACK UNDERFLOW: Stack is empty" << endl;
        return EMPTY_STACK;
    } else {
        return stackArray[topIndex];
    }
}

void Stack::display() {
    if (topIndex == -1) {
        cout << "STACK UNDERFLOW: Stack is empty" << endl;
        return;
    } else {
        int index = 0;
        while (index <= topIndex) {
            cout << stackArray[index] << "  ";
            index++;
        }
        cout << endl;
    }
}

int main() {
    Stack stackObj;
    stackObj.push(3);
    stackObj.push(10);
    stackObj.push(23);
    int poppedValue = stackObj.pop();
    cout << poppedValue << endl;
    int topValue = stackObj.peek();
    cout << topValue << endl;
    stackObj.display();
    return 0;
}
//OUTPUT
//23
//10
//3  10
