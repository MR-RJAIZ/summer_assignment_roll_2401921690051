#include <stack>

class MyQueue {
private:
    std::stack<int> inStack;
    std::stack<int> outStack;

    // Helper function to transfer elements from inStack to outStack if needed
    void transferIfNeeded() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
    }

public:
    MyQueue() {
        
    }
    
    // Push element x to the back of queue.
    // Time Complexity: O(1)
    void push(int x) {
        inStack.push(x);
    }
    
    // Removes the element from the front of queue and returns it.
    // Time Complexity: Amortized O(1)
    int pop() {
        transferIfNeeded();
        int val = outStack.top();
        outStack.pop();
        return val;
    }
    
    // Get the front element.
    // Time Complexity: Amortized O(1)
    int peek() {
        transferIfNeeded();
        return outStack.top();
    }
    
    // Returns whether the queue is empty.
    // Time Complexity: O(1)
    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */