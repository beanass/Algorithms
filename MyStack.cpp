

#include "MyStack.h"
#include <iostream>


MyStack::MyStack() {

}

void MyStack::push(int x){
    numbers.push(x);
}

int MyStack::pop() {
    std::queue<int> temp = numbers;
    std::queue<int> newQ;
    while(temp.size()>1) {
        newQ.emplace(temp.front());
        temp.pop();
    }
    numbers.swap(newQ);
    return temp.front();
}

int MyStack::top() {
    return numbers.back();
}

bool MyStack::empty() {
    return numbers.empty();
}

void MyStack::printStack() {
    std::queue<int> temp = numbers;
    while (!temp.empty()) {
        std::cout << temp.front()<<" ";
        temp.pop();
    }
    std::cout << '\n';
}


