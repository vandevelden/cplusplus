#include "stack.h"
#include "iostream"

void Stack::push(int v){
    if (top == max_size) {
        std::cerr << "max_size reached" << std::endl;
    }
    value[top] = v;
    top = top + 1;
}

int Stack::pop()
{
    int top = 1;
    return value[top];

}
