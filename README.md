# Implementation-of-stack-using-array-in-cpp
## Objective
Implement a stack using a fixed-size array in C++, covering push, pop, peek, and display operations while handling overflow and underflow conditions.

Software required:
- MinGW C/C++ compiler
- Visual Studio Code
- Online C++ compiler

## Stack operations: push, pop, peek, display
Explanation and theory: A stack is a sequential container that follows the LIFO rule, where the most recently inserted item is the first removed. This implementation stores elements in an array of capacity 5 and tracks the top position with topIndex. Push adds a new element at the next top slot unless the array is full, reporting STACK OVERFLOW if no space remains. Pop removes and returns the current top element, signaling STACK UNDERFLOW if the stack is empty. Peek reveals the top element without removing it. Display prints the contents from the bottom (index 0) up to topIndex. The main routine exercises these operations to demonstrate correct behavior.

### Algorithm
- Start
- Initialize topIndex = −1 and allocate stackArray[MAX_SIZE]
- Push:
  - If topIndex == MAX_SIZE − 1, output “STACK OVERFLOW”
  - Else increment topIndex and write value at stackArray[topIndex]
- Pop:
  - If topIndex == −1, output “STACK UNDERFLOW”
  - Else return stackArray[topIndex] and decrement topIndex
- Peek:
  - If topIndex == −1, output “STACK UNDERFLOW”
  - Else return stackArray[topIndex] without modifying it
- Display:
  - If topIndex == −1, print that the stack is empty
  - Else print elements from index 0 to topIndex
- In main: perform sample push, pop, peek, and display operations
- Stop

## Conclusion
This array-backed stack illustrates core LIFO behavior with clear index management, including standard error checks for full and empty states. While the fixed capacity limits scalability, the design conveys essential stack mechanics that can later be expanded to dynamic memory via linked lists or resizable containers. The example offers a compact, reliable foundation for stack-based problem solving.
