#include <iostream>
#include "Palindrom.h"
#include "MyStack.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Palindrom(121);

    MyStack myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.printStack();
    //std::cout<<myStack.top()<<" "; // return 2
    std::cout<<myStack.pop() << " ";
    std::cout<<myStack.pop() << " ";
    std::cout<<myStack.pop() << " "; // return 2
    std::cout<<myStack.empty(); // return False

    return 0;
}
