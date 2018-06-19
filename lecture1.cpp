#include "stack.h"
#include <iostream>
#include <string>

// putting push and pop to separate cpp file causes 
// duplicate symbol __ZN5Stack3topE in:
//     /var/folders/_5/45lt9ryn7xjffcbfy61crpch0000gr/T/stack-81ad12.o
//     /var/folders/_5/45lt9ryn7xjffcbfy61crpch0000gr/T/lecture1-54434c.o
// duplicate symbol __ZN5Stack5valueE in:
//     /var/folders/_5/45lt9ryn7xjffcbfy61crpch0000gr/T/stack-81ad12.o
//     /var/folders/_5/45lt9ryn7xjffcbfy61crpch0000gr/T/lecture1-54434c.o
// ld: 2 duplicate symbols for architecture x86_64
// clang: error: linker command failed with exit code 1 (use -v to see invocation)

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

void error (std::string s)
{
  std::cout << "error occurred" << s << std::endl;
}


void func(){
    std::cout << "pushing 200" << std::endl;
    Stack::push(200);
    if(Stack::pop() != 200) {
        std::string err ("here is the error");
    }
    std::cout << "pop() returned 200" << std::endl;
}


int main()
{    
    //func();

    return 1;
}