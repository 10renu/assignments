 // Include the iostream header for input and output operations
#include <iostream>
#include <queue>
// Declares a queue named gquiz that holds integers

using namespace std;

// Function to print the elements of the queue
void showq(queue<int> gq)
{
    // Create a copy of the queue
    queue<int> g = gq;

    // Print each element of the queue
    while (!g.empty()) {
        cout << '\t' << g.front();  // Print the front element
        g.pop();  // Pop the front element
    }

    cout << '\n';
}

// Driver code
int main()
{
    // Declare a queue of integers
    queue<int> gquiz;

    // Push elements onto the queue
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    // Print the initial state of the queue
    cout << "The queue gquiz is : ";
    showq(gquiz);

    // Display size of the queue
    cout << "\ngquiz.size() : " << gquiz.size();

    // Display the front element of the queue
    cout << "\ngquiz.front() : " << gquiz.front();

    // Display the back element of the queue
    cout << "\ngquiz.back() : " << gquiz.back();

    // Pop an element from the queue
    cout << "\ngquiz.pop() : ";
    gquiz.pop();

    // Print the updated state of the queue
    showq(gquiz);

    return 0;  // Indicates successful program execution
}
