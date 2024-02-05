// Include the iostream header for input and output operations
#include <iostream>
//Declares a stack named stack that holds integers.
#include <stack>

using namespace std;

int main() {
    // Declare a stack of integers
    stack<int> stack;

    // Push values onto the stack
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);

    // Push zero onto the stack
    int num = 0;
    stack.push(num);

    // Pop the top element (zero) from the stack
    stack.pop();

    // Pop three more elements from the stack
    stack.pop();
    stack.pop();
    stack.pop();

    // Print elements of the stack in reverse order
    while (!stack.empty()) {
        cout << stack.top() << " ";  // Print the top element
        stack.pop();  // Pop the top element
    }

    return 0;  // Indicates successful program execution
}
