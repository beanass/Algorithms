
#ifndef ALGORITHMS_MYSTACK_H
#define ALGORITHMS_MYSTACK_H

#include <queue>

class MyStack {
private:
    std::queue<int> numbers;

public:
    MyStack();

    void push(int x);

    int pop();

    int top();

    bool empty();

    void printStack();
};


#endif //ALGORITHMS_MYSTACK_H
